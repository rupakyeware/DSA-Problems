#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int getMaxDigit(int n) {
    int maxDigit = INT_MIN;

    while(n) {
        maxDigit = max(maxDigit, n % 10);
        n /= 10;
    }

    return maxDigit;
}

void solve() {
    int n; cin >> n;

    int c = 0;
    while(n) {
        c++;
        n -= getMaxDigit(n);
    }

    cout << c << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}