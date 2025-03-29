#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> a(n + 1, 0);
    vector<int> b(n + 1, 0);

    // for(int i = 1; i <= n; i++) {
    //     a[i] = ((a[i] % MOD) + (v[i] % MOD)) % MOD;
    
    // for(int i = 1; i <= n; i++) {
    //     b[i] = (b[i-1] + v[i]) % * i;
    // }

    // for(int i = 0; i <= n; i++) cout << a[i] << " "; cout << endl;
    // for(int i = 0; i <= n; i++) cout << b[i] << " ";

    // while(q--) {
    //     int l, r; cin >> l >> r;
    //     int ans_b = ((b[r] % MOD) - (b[l-1] % MOD) + MOD) % MOD;
    //     int ans_a = (1 - l)*(((a[r] % MOD) - (a[l-1] % MOD) + MOD) % MOD);
    //     cout << (ans_b % MOD) + (ans_a % MOD) << endl;
    // }    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}