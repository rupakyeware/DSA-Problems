#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    int numOfElems = 2 * n;
    vector<bool> isSet(numOfElems, false);
    vector<int> ans(numOfElems + 1, 0);

    // accept input, mark it as used, and add it to the ans vector
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int x; cin >> x;
            isSet[x] = true;
            ans[i+j] = x;
        }
    }

    // find the missing element which will go in the 0th position
    for(int i = 1; i <= numOfElems; i++) {
        if(!isSet[i]) {
            ans[1] = i;
            break;
        }
    }

    for(int i = 1; i <= numOfElems; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}