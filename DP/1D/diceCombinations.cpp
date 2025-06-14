// #include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int sum; cin >> sum;
    vector<int> dp(sum + 1);
    dp[0] = 1;

    for(int i = 1; i <= sum; i++) {
        int count = 0;
        for(int j = 1; j <= 6; j++) {
            if(i-j < 0) break;
            count = (count + dp[i-j]) % MOD;
        }
        dp[i] = count;
    }

    cout << dp[sum] << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}