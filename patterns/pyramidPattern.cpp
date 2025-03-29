#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) cout << "  ";
        for(int j = 0; j < 2 * i - 1; j++) cout << "* ";
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
//             * 
//           * * * 
//         * * * * * 
//       * * * * * * * 
//     * * * * * * * * * 
//   * * * * * * * * * * * 
// * * * * * * * * * * * * *