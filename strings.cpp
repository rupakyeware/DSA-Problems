#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    cout << a.size() << ' ' << b.size() << endl;

    string c = a + b;
    cout << c << endl;

    swap(a[0], b[0]);
    cout << a << ' ' << b << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}