#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <climits>

using namespace std;

int max_score(int n, vector<int>& arr, int k) {
    vector<int> dp(n, INT_MIN);
    dp[0] = arr[0];

    deque<int> dq;
    dq.push_back(0); 

    for (int i = 1; i < n; ++i) {
        while (!dq.empty() && dq.front() < i - k) {
            dq.pop_front();
        }

        dp[i] = dp[dq.front()] + arr[i];

        while (!dq.empty() && dp[dq.back()] <= dp[i]) {
            dq.pop_back();
        }
        
        dq.push_back(i);
    }

    return dp[n - 1];
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int K;
        cin >> K;

        cout << max_score(N, arr, K) << endl;
    }

    return 0;
}
