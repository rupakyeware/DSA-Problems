#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

bool check() {

}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> prefix(n+1, 0);
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + v[i-1];
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