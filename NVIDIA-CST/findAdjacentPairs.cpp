#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

bool isValid(vector<int> &v, int n) {
    if(n == 1) return false;
    for(int i = 1; i < n; i++) {
        if(max(v[i], v[i-1]) - min(v[i], v[i-1]) == 1) return true;
    }
    return false;
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    cout << isValid(v, n) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}