#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        int t; cin >> t;
        m[t]++;
    }

    for(auto it: m) {
        if(it.second % 2 != 0) {
            cout << it.first << endl;
            return;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}