#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int findSteps(int step, vector<int> &dp, int m) {
    if(step < 0) return INT_MAX;
    if(step == 0) return 0;
    if(dp[step] != -1) {
        return dp[step]; // if we have already calculated min steps for from this step
    }

    int minSteps = INT_MAX;

    if(step - m >= 0) {
        // find steps required with m steps
        int res_m = findSteps(step - m, dp, m);
        minSteps = min(minSteps, res_m + 1);
    }

    // find steps required with 1 step
    int res_1 = findSteps(step - 1, dp, m);
    minSteps = min(minSteps, res_1 + 1);
    
    dp[step] = minSteps; // store calcualted result in dp array
    return dp[step];

}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    cout << findSteps(n, dp, m) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}