#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

int dfs(vector<vector<char>> &grid, vector<vector<int>> &dp, int row, int col, int n) {
    if(dp[row][col] != -1) return dp[row][col]; // if we've already visited this loc

    int paths = 0;

    if(row + 1 < n && grid[row+1][col] != '*') paths = ((paths % MOD) + (dfs(grid, dp, row + 1, col, n) % MOD)) % MOD; // explore down if not *
    if(col + 1 < n && grid[row][col+1] != '*') paths = ((paths % MOD) + (dfs(grid, dp, row, col + 1, n) % MOD)) % MOD; // explore right if not *

    dp[row][col] = paths; // write to dp table
    return paths;
}

void solve() {
    int n; cin >> n;
    vector<vector<char>> grid(n, vector<char> (n));
    vector<vector<int>> dp(n, vector<int> (n, -1));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    dp[n-1][n-1] = (grid[n-1][n-1] == '*' ? 0: 1);

    cout << (grid[0][0] == '*' ? 0 : dfs(grid, dp, 0, 0, n)) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}