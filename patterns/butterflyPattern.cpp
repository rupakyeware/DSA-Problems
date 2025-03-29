#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;

    int max = n + n - 1;
    int mid = max / 2;

    for(int i = 1; i <= mid; i++) {
        for(int j = 1; j <= max; j++) {
            if(j <= 0 + i || j > max - i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= max; i++) cout << "*";
    cout << endl;

    for(int i = mid; i > 0; i--) {
        for(int j = 1; j <= max; j++) {
            if(j <= 0 + i || j > max - i) cout << "*";
            else cout << " ";
        }
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