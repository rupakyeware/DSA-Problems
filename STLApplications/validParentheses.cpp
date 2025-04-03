#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string s; cin >> s;
    int cnt = 0;
    int parentheses_to_add = 0;
    int n = s.size();

    for(int i = 0; i < n; i++) {
        if(s[i] == '(') cnt++;
        else if(s[i] == ')') cnt--;
        if(cnt < 0) {
            cnt++; 
            parentheses_to_add++;
        }
    }

    if(cnt > 0) {
        parentheses_to_add += cnt;
    }

    cout << parentheses_to_add << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}