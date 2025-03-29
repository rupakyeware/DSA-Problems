#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string s; getline(cin, s);
    int cnt = 0, n = s.length();
    bool inWord = false;

    for(char c: s) {
        if(isalpha(c)) {
            inWord = true;
        }
        else if(!isalpha(c) && inWord) {
            cnt++;
            inWord = false;
        }
    }

    if(inWord) cnt++;
    cout << cnt;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}