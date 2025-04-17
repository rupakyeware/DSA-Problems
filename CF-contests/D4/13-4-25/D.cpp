#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

bool isPossible(string &s1, string &s2) {
    int n = s1.size(), m = s2.size();
    if(n > m) return false;

    int p1 = 0, p2 = 0;
    int c1 = 1, c2 = 1;

    while(p1 < n && p2 < m) {
        if(s1[p1] != s2[p2]) return false;

        while(s1[p1] == s1[p1+1]) {
            c1++;
            p1++;
        }

        while(s2[p2] == s2[p2+1]) {
            c2++;
            p2++;
        }

        if(c2 > c1 * 2 || c2 < c1) return false;
        c1 = 1; c2 = 1;
        p1++; p2++;
    }

    if(p1 < n || p2 < m) return false;
    return true;
}

void solve() {
    string s1, op; cin >> s1 >> op;
    cout << (isPossible(s1, op) ? "YES" : "NO") << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}