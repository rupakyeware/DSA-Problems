#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i + 1; s++) cout << "  ";
        int val = 1;
        for(int j = 1; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / j;
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