#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        for(int s = 0; s < n - i; s++) cout << "  ";
        for(int j = 1; j <= i; j++) cout << j << ' ';
        for(int j = i - 1; j > 0; j--) cout << j << ' ';
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
//       1       
//     1 2 1     
//   1 2 3 2 1   
// 1 2 3 4 3 2 1