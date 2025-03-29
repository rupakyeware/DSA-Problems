#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

int bin_pow(int a, int b) {
    if (b == 0) return 1;

    int ans = bin_pow(a, b/2);
    ans = (ans * ans) % MOD;

    if(b%2) return (ans * a) % MOD;
    return ans;
}

void solve() {
    int x, y; cin >> x >> y;

    cout << bin_pow(x, y) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}