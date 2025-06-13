#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    int l = 0;
    int len = 0;
    unordered_map<int, int> frq;

    for(int r = 0; r < n; r++) {
        frq[vec[r]]++;

        while(l < r && frq[vec[r]] > 1) {
            frq[vec[l]]--;
            l++;
        }

        int currLen = r - l + 1;
        len = max(currLen, len);
    }

    cout << len << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}