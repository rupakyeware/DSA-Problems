#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    map<char, int> m; 
    
    for(char c: s) {
        m[c]++;
    }

    for(auto i: m) cout << i.first << " : " << i.second << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}