#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <tuple>

using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> prefixSum;

int getSum(int x1, int y1, int x2, int y2, int R, int C) {
    if (x1 < 0 || y1 < 0 || x2 >= R || y2 >= C) {
        return INT_MAX;
    }
    return prefixSum[x2 + 1][y2 + 1]
           - (x1 > 0 ? prefixSum[x1][y2 + 1] : 0)
           - (y1 > 0 ? prefixSum[x2 + 1][y1] : 0)
           + (x1 > 0 && y1 > 0 ? prefixSum[x1][y1] : 0);
}

vector<int> max_area(int R, int C, vector<vector<int>>& matrix, vector<tuple<int, int, int>>& queries) {
    // Step 1: Build the prefix sum array
    prefixSum = vector<vector<int>>(R + 1, vector<int>(C + 1, 0));
    
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            prefixSum[i + 1][j + 1] = matrix[i][j] + prefixSum[i][j + 1] + prefixSum[i + 1][j] - prefixSum[i][j];
        }
    }

    vector<int> results;
    
    // Step 2: Process each query
    for (auto& query : queries) {
        int x, y, k;
        tie(x, y, k) = query;

        int low = 0, high = min({x, y, R - x - 1, C - y - 1});
        int best_area = 0;

        while (low <= high) {
            int d = (low + high) / 2;
            int x1 = x - d, y1 = y - d;
            int x2 = x + d, y2 = y + d;
            
            int black_count = getSum(x1, y1, x2, y2, R, C);
            
            if (black_count <= k) {
                best_area = (2 * d + 1) * (2 * d + 1);  // Area of the square
                low = d + 1;
            } else {
                high = d - 1;
            }
        }

        results.push_back(best_area);
    }

    return results;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C;
    cin >> R >> C;

    vector<vector<int>> matrix(R, vector<int>(C));

    // Input the matrix
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];
        }
    }

    int Q;
    cin >> Q;
    
    vector<tuple<int, int, int>> queries(Q);
    for (int i = 0; i < Q; ++i) {
        int X, Y, K;
        cin >> X >> Y >> K;
        queries[i] = make_tuple(X, Y, K);
    }

    vector<int> results = max_area(R, C, matrix, queries);
    
    // Output the results
    for (int res : results) {
        cout << res << "\n";
    }

    return 0;
}
