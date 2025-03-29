#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    long long product = 1;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        product = ((product % MOD) * (x % MOD)) % MOD;
    }

    cout << product << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}