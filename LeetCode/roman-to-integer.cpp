#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

unordered_map<string, int> om = {
    {"I", 1},
    {"IV", 4},
    {"V", 5},
    {"IX", 9},
    {"X", 10},
    {"XL", 40},
    {"L", 50},
    {"XC", 90},
    {"C", 100},
    {"CD", 400},
    {"D", 500},
    {"CM", 900},
    {"M", 1000},
};

void solve() {
    string s; cin >> s;
    int result = 0, curr = 0;

    while(curr < s.size()) {
        if(om.find(s.substr(curr, 2)) != om.end()) {
            result += om[s.substr(curr, 2)];
            curr++;
        }
        else {
            result += om[string(1, s[curr])];
        }
        curr++;
    }
    cout << result << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}