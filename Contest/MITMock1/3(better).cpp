#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void solve() {
    int n, cnt = 0; cin >> n;
    vector<int> v(n);
    map<int, int> omap;
    map<int, int> fmap;

    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) omap[i] = v[i] + i;

    for(auto it: omap) {
        fmap[it.second]++;
    }

    for(auto it: fmap) {
        // cout << it.first << ' ' << it.second << endl;
        if(it.second > 1) {
            cnt += (it.second * (it.second - 1)) / 2;
        }
    }

    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}