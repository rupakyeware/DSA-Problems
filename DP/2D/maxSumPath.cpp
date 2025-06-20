#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int n, m; 

int rec(vector<vector<int>> &arr, int r, int c, vector<vector<int>> &dp) {
    // pruning 
    if(r < 0 || r >= n || c < 0 || c >= m) return INT_MIN;

    // base case 
    if(r == 0 && c == 0) return 0 + arr[r][c]; // 0 + value of the first cell

    // dp check 
    if(dp[r][c] != INT_MIN) return dp[r][c];

    // transition 
    int ans = max(rec(arr, r, c-1, dp) + arr[r][c], rec(arr, r-1, c, dp) + arr[r][c]); // max of (coming from left, coming from above)

    // save and return 
    return dp[r][c] = ans;
}

void solve() {
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    vector<vector<int>> dp(n+1, vector<int> (m+1, INT_MIN));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) 
            cin >> arr[i][j];
    }


    cout << rec(arr, n-1, m-1, dp) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}