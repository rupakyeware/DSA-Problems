#include<bits/stdc++.h>
#include<typeinfo>
#define endl '\n'
using namespace std;

void solve() {
    string s, t; cin >> s;
    int n = s.size(), p = 0;
    map<char, int> m;
    
    for(char c: s) {
        m[c]++;
    }
    
    for(auto &it: m) {
        while(it.second >= 2) {
            t.insert(p, string(1, it.first));
            t.insert(p + 1, string(1, it.first));
            p++;
            it.second -= 2;
        }
    }

    for(auto it: m) {
        if(it.second > 0) {
            t.insert(t.size() / 2, string(1, it.first));
            break;
        }
    }
    cout << t << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}