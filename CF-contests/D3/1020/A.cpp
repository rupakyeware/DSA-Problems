#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; string s;
    cin >> n >> s;

    int ans = 0, total1s = 0;

    // Count the total number of 1s in the string
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') total1s++;
    }

    // Calculate total 1s on the board
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            ans += total1s + 1;
        }
        else {
            ans += total1s - 1;
        }
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}