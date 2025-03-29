#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

string getGoodOrBad(string s) {
    if(s.find("101") != string::npos || s.find("010") != string::npos) return "Good";
    return "Bad";
}

void solve() {
    string s; cin >> s;
    cout << getGoodOrBad(s) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}