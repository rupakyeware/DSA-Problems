#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

string shiftString(string s, int leftShift, int rightShift) {
    int len = s.size();
    leftShift %= len;
    rightShift %= len;

    int combinedShift = ((rightShift - leftShift) + len) % len;
    s = s.substr(combinedShift) + s.substr(0, combinedShift);

    return s;
}

void solve() {
    string s; 
    int leftShift, rightShift;
    cin >> s >> leftShift >> rightShift; 
    cout << shiftString(s, leftShift, rightShift) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}