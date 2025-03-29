#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    int n, maxLen = 2, currLen = 2; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int currDiff = v[1] - v[0];
    for(int i = 1; i < n - 1; i++) {
        int diff = v[i+1] - v[i];
        if(diff == currDiff) {
            currLen++;
            maxLen = max(maxLen, currLen);
        } else {
            currLen = 2;
            currDiff = diff;
        }
    }

    cout << maxLen << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}