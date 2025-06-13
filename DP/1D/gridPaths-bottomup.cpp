// #include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<vector<char>> grid(n, vector<char> (n)); // path grid
    vector<vector<int>> dp(n, vector<int> (n, 0)); // dp table

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // set the base cases for 1st row
    for(int i = 0; i < n; i++) {
        if(grid[0][i] == '*') break;
        dp[0][i] = 1;
    }

    // set the base cases for 1st col
    for(int i = 0; i < n; i++) {
        if(grid[i][0] == '*') break;
        dp[i][0] = 1;
    }

    // fill the dp table
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(grid[i][j] == '*') continue;

            int paths = 0;
            if(grid[i][j-1] != '*') paths = (paths + dp[i][j-1]) % MOD; // cell to the left
            if (grid[i-1][j] != '*') paths = (paths + dp[i-1][j]) % MOD; // cell above

            dp[i][j] = paths;
        }
    }

    cout << dp[n-1][n-1] << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}