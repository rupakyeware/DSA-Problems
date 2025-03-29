#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool checkBalanced(map<int, int> &m) {
    int first = m.begin()->second;
    for(auto it: m) {
    }
}

void solve() {
    string s; cin >> s;
    int cnt = 0;
    vector<pair<int, int>> bounds;
    map<int, int> m;

    for(char c: s) {
        m[c]++;

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