#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        char start = 'A';
        for(int j = 0; j <= i; j++) {
            cout << start;
            start++;
        }
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