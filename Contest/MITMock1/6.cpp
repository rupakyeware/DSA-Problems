#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int eval(string s) {
    int n = s.size();
    int curr_num = 0, ans = 0, sign = 1;
    for(int i = 0; i < n; i++) {
        if(isdigit(s[i])) {
            curr_num *= 10;
            curr_num += s[i] - '0';
        }
        else {
            ans += sign * curr_num;
            curr_num = 0;
            sign = (s[i] == '+' ? 1 : -1);
        }
    }
    ans += sign * curr_num;

    return ans;
}

void solve() {
    string s, lhs, rhs;
    cin >> s;

    size_t pos = s.find('=');
    lhs = s.substr(0, pos);
    rhs = s.substr(pos+1);

    // Make sure X is on lhs
    size_t x_pos = lhs.find('X');
    if(x_pos == string::npos) {
        swap(lhs, rhs);
        x_pos = lhs.find('X');
    }
    lhs[x_pos] = '0';

    int val_lhs = eval(lhs);
    int val_rhs = eval(rhs);

    // if X is minus then lhs - rhs 
    // else rhs - lhs
    cout << (lhs[x_pos - 1] == '-' ? val_lhs - val_rhs : val_rhs - val_lhs) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t;
    cin >> _t;

    while (_t--) solve();
    return 0;
}
