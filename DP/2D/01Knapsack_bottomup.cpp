#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    int W; cin >> W;

    vector<int> wt(n);
    vector<int> val(n);
    
    for(int i = 0; i < n; i++) cin >> wt[i]; //accept weights of all items
    for(int i = 0; i < n; i++) cin >> val[i]; // accept values of all items

    vector<vector<int>> dp(n + 1, vector<int> (W + 1, 0)); // initialize 2D dp table

    for(int i = 1; i <= n; i++) { // iterate through all items
        for(int w = 1; w <= W; w++) { // iterate through all possible weights of i-1th item
            if(wt[i-1] <= w) { // if weight of current item is less than wth capacity of knapsack
                dp[i][w] = max( // max of previous value (don't pick current item) and value if we pick the current item
                    dp[i-1][w],
                    val[i-1] + dp[i-1][w-wt[i-1]]
                );
            }
            else { // just copy what we had done previously (without the current item)
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    cout << dp[n][W] << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}