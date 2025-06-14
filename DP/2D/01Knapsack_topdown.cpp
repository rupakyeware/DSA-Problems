#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int dfs(vector<vector<int>> &dp, vector<int> &wt, vector<int> &val, int W, int noItems, int currCapacity) {
    if(noItems == 0 || currCapacity == 0) return 0;
    if(dp[noItems][currCapacity] != -1) return dp[noItems][currCapacity];

    // don't pick current item
    int noPick = dfs(dp, wt, val, W, noItems - 1, currCapacity);

    // if remaining capacity allows picking the current item, pick it
    int pick = 0;
    if(wt[noItems - 1] <= currCapacity) {
        pick += val[noItems - 1] + dfs(dp, wt, val, W, noItems - 1, currCapacity - wt[noItems - 1]); // val of currItem + dfs of next item
    }

    return dp[noItems][currCapacity] = max(noPick, pick);

}

void solve() {
    int n; cin >> n;
    int W; cin >> W;

    vector<int> wt(n);
    vector<int> val(n);
    
    for(int i = 0; i < n; i++) cin >> wt[i]; //accept weights of all items
    for(int i = 0; i < n; i++) cin >> val[i]; // accept values of all items

    vector<vector<int>> dp(n + 1, vector<int> (W + 1, -1)); // initialize 2D dp table

    cout << dfs(dp, wt, val, W, n, W) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}