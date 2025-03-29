#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int result = 1;
    while(n--) {
        result = (result * 2) % MOD;
    }

    cout << result << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}