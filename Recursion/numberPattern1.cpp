#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void print(int n ) {
    if(n == 1) {
        cout << n << endl;
        return;
    }
    cout << n << endl;
    print(n-1);
    cout << n << endl;
}

void solve() {
    int n; cin >> n;
    print(n);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}