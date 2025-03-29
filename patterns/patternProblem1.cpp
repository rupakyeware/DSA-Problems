#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int max = m * 3 + 1;

    for(int i = 0; i < max; i++) cout << "*";
    cout << endl;

    for(int i = 0; i < n; i++) {
        cout << "*";
        for(int j = 0; j < m; j++) cout << "..*";
        cout << endl;

        cout << "*";
        for(int j = 0; j < m; j++) cout << "..*";
        cout << endl;

        for(int j = 0; j < max; j++) cout << "*";
        cout << endl;
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