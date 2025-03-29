#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    while(s.length() > 2) {
        for(int i = 0; i < s.length() - 1; i++) {
            int n1 = s[i] - '0';
            int n2 = s[i+1] - '0';
            int sum = n1 + n2;
            s[i] = sum % 10;
            if(i == s.length() - 2) s.pop_back();
            cout << s << endl;
        }
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