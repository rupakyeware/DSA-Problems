#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> prefix(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        prefix[i] = (prefix[i-1] + x) % MOD;
    }

    while(q--) {
        int l, r; cin >> l >> r;
        int query_sum = ((prefix[r] - prefix[l-1]) % MOD + MOD) % MOD;
        cout << query_sum << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}