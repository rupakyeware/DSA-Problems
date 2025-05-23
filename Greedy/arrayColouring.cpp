#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool isPossibleToColour(int o) {
    if(o % 2 == 0) return true;
    else return false;
}

void solve() {
    int n; cin >> n;
    int o = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x % 2) o++;
    }

    cout << (isPossibleToColour(o) ? "YES" : "NO") << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}