#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> prefix_v(n + 1, 0);

    for(int i = 1; i <= n; i++) prefix_v[i] = prefix_v[i-1] + v[i-1];

    while(q--) {
        int query; cin >> query;
        auto val = upper_bound(prefix_v.begin(), prefix_v.end(), query);
        int pos = (val - 1) - prefix_v.begin();
        cout << pos << endl;
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