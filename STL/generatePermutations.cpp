#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int fact(int i) {
    return i * (i - 1);
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    do {
        for(int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        } cout << endl;

    } while(next_permutation(v.begin(), v.end()));
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}