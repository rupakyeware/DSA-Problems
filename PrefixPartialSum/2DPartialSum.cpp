#include "../stdc++.h"
#define endl '\n'
#define int long long
using namespace std;

void solve() {
    int n, m, q; cin >> n >> m >> q;
    vector<vector<int>> v(n+2, vector<int> (m+2, 0)); // Initialize a 2D array of size n x m with all 0s
    // We have done n+2 and m+2 becayse
    // 1. We are given inputs in 1D. So we have to add one extra row and col each for that
    // 2. Adding the partial sum values at the borders requires another extra row and col each in edge cases.    
    while(q--) {
        // Perform the partial sum operations for each query
        int x1, y1, x2, y2, c; cin >> x1 >> y1 >> x2 >> y2 >> c;
        v[x1][y1] += c;
        v[x1][y2+1] += -(c);
        v[x2+1][y1] += -(c);
        v[x2+1][y2+1] += c;
    }

    // Find final matrix and add increment cnt of max
    int max = INT_MIN, cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1]; 
            if(v[i][j] > max) {
                max = v[i][j];
                cnt = 1;
            }
            else if(v[i][j] == max) cnt++;
        }
    }

    // Print value and count of last element in map
    cout << max << " " << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}