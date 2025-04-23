#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);

    int count0s = 0, count1s = 0;

    for(int i = 0; i < n; i++) cin >> vec[i];
    for(int i: vec) i ? count1s++ : count0s++;

    cout << count0s * count1s << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}