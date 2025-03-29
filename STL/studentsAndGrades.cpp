#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    set<int> sectionA;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sectionA.insert(x);
    }

    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        // cout << "Student entered: " << x << endl;
        if(sectionA.find(x) != sectionA.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
        sectionA.insert(x);
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