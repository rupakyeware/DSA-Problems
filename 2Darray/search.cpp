#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    set<int> s;
    for(int i = 0; i < n * m; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    int x; cin >> x;
    if(s.find(x) != s.end()) {
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
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