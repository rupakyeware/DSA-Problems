#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, currPrime = 2; cin >> n;
    vector<int> v;
    while(n) {
        if(n > 0 && n != 3) {
            v.push_back(2);
        }
        else {
            v.push_back(3);
        }
        n -= v[v.size() - 1];
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}