#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m, sum = 0, objs = 0; cin >> n >> m;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        if(sum + v[i] <= m) {
            sum += v[i];
            objs++;
        }
        else break;
    }

    cout << objs << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}