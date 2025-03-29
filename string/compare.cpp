#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    std::string x, y;
    int i;
    cin >> x >> y;
    for(i = 0; i < min(x.size(), y.size()); i++){
        if(x[i] < y[i]) {
            cout << x << endl;
            return;
        }
        else if(x[i] > y[i]){
            cout << y << endl;
            return;
        }
    }
    cout << ( x < y ? x : y) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}
