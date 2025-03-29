#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    int max = n * 2 ,mid = max / 2;
    for(int i = 0; i < mid; i++) {
        for(int j = 1; j < max; j++) {
            if(j == mid - i || j == mid + i) cout << "*";
            else cout << " ";
        }        
        cout << endl;
    }
    for(int i = mid - 2; i >= 0; i--) {
        for(int j = 1; j < max; j++) {
            if(j == mid - i || j == mid + i) cout << "*";
            else cout << " ";
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
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
