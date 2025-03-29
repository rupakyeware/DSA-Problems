#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m;  cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < m; j++) {
            if(j == 0 || j == m - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < m; i++) {
        cout << "*";
    }
    cout << endl << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) {
        solve();
    }
    return 0;
}