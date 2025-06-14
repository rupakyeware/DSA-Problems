#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

vector<int> solution;

int dfs(vector<vector<int>> &dp, vector<int> &wt, vector<int> &val, int W, int level, int remainingCap, int n) {
    if(level == n || remainingCap == 0) return 0;
    if(dp[level][remainingCap] != -1) return dp[level][remainingCap];

    // don't pick current item
    int noPick = dfs(dp, wt, val, W, level + 1, remainingCap, n);

    // if remaining capacity allows picking the current item, pick it
    int pick = 0;
    if(wt[level] <= remainingCap) {
        pick += val[level] + dfs(dp, wt, val, W, level + 1, remainingCap - wt[level], n); // val of currItem + dfs of next item
    }

    return dp[level][remainingCap] = max(noPick, pick);

}

void display(vector<vector<int>> &dp, vector<int> &wt, vector<int> &val, int W, int level, int remainingCap, int n) {
    if(level == n || remainingCap == 0) return;
    int noPick = dfs(dp, wt, val, W, level, remainingCap, n);
    int pick = 0;
    if(wt[level] <= remainingCap) {
        pick += val[level] + dfs(dp, wt, val, W, level + 1, remainingCap - wt[level], n);
    }

    if(noPick > pick) {
        display(dp, wt, val, W, level + 1, remainingCap, n);
    }
    else {
        solution.push_back(level);
        display(dp, wt, val, W, level + 1, remainingCap - wt[level], n);
    }
}

void solve() {
    int n; cin >> n;
    int W; cin >> W;

    vector<int> wt(n);
    vector<int> val(n);
    
    for(int i = 0; i < n; i++) cin >> wt[i]; //accept weights of all items
    for(int i = 0; i < n; i++) cin >> val[i]; // accept values of all items

    vector<vector<int>> dp(n + 1, vector<int> (W + 1, -1)); // initialize 2D dp table

    cout << dfs(dp, wt, val, W, 0, W, n) << endl;

    // this function is very similar to dfs but since the required values are already stored in dp, they will be retrieved in O(1)
    display(dp, wt, val, W, 0, W, n); 
    for(int i: solution) cout << i << " ";
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}