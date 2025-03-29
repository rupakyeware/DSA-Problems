#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool isQ(int q, int n) {
    for(int i = 1; q == 1? i * i <= n : i * i * i <= n; i++) {
        if(q == 1) {
            if(i * i == n) return true;
        } else {
            if (i * i * i == n) return true;
        }
    }
    return false;
}

void solve() {
    int q, n; cin >> q >> n;
    cout << (isQ(q, n) ? "YES" : "NO") << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}