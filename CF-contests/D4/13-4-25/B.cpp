#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m, l, r; cin >> n >> m >> l >> r;
    int d = 0, p1 = 0, p2 = 0;

    // infect houses to the left of 0
    while(p1 > l && d < m) {
        d++;
        p1--;
    }

    //infect houses to the right of 0
    while(p2 < r && d < m) {
        d++;
        p2++;
    }

    // results
    cout << p1 << " " << p2 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}