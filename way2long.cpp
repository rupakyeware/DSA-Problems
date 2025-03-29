#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string s;
    cin >> s;
    if(s.size() < 11) {
        cout << s << endl;
    }
    else {
        cout << s[0] << s.size() - 2 << s[s.size()-1] << endl;
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