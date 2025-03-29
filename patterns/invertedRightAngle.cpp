#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    int temp = n;

    for(int i = 0; i < n; i++) {
        for(int j = temp; j > 0; j--) {
            cout << "*";
        }
        temp--;
        cout << endl;
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}