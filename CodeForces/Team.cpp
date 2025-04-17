#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    int cnt = 0;
    while(n--) {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            int x; cin >> x;
            sum += x;
        }
        if(sum >= 2) cnt++;
    }
    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}