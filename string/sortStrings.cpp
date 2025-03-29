// Disclaimer: I borrowed the approach to use a frequence array for sorting from Harsh Chauhan.

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string custom_sort(string s) {
    vector<int> v(26, 0);
    string ans;

    for(char c: s) {
        v[c-'a']++;
    }

    for(int i = 0; i < 26; i++) {
        while(v[i] > 0) { ans.push_back(i + 'a'); v[i]--; }
    }

    return ans;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << custom_sort(s) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while (_t--) solve();
    return 0;
}
