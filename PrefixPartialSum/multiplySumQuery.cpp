#include "../stdc++.h"
#define int long long
#define endl '\n'
const int MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // Prefix sum of v[i]
    vector<int> prefix_a(n+1, 0);
    for(int i = 1; i <= n; i++) {
        prefix_a[i] = ((prefix_a[i-1] % MOD) + (v[i-1]) % MOD) % MOD;
    }

    // Prefix sum of v[i] * i;
    vector<int> prefix_b(n+1, 0);
    for(int i = 1; i <= n; i++) {
        prefix_b[i] = ((prefix_b[i-1] % MOD) + (v[i-1] * i) % MOD) % MOD;
    }

    while(q--) {
        int l, r; cin >> l >> r;
        int ans = prefix_b[r] - prefix_b[l-1]; // This will give us (v[l] * l) + (v[l] * (l+1)) etc.
        ans -= (l-1) * (prefix_a[r] - prefix_a[l-1]); // Then after some calculation that I didn't really understand much we get the correct answer
        ans = (ans % MOD + MOD) % MOD;
        cout << ans << endl;
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