#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, d; cin >> n >> d;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    int penalty = 0;
    int distElemsInWindow = 0;
    unordered_map<int, int> frq;

    // Get penalty of initial window
    for(int i = 0; i < d; i++) {
        if(frq[vec[i]] == 0) distElemsInWindow++;
        frq[vec[i]]++;
    }
    penalty = distElemsInWindow;
    
    // Get minimum penalty of all windows of size d
    int l = 0;
    for(int r = d; r < n; r++) {
        // Consume rth element
        if(frq[vec[r]] == 0) distElemsInWindow++;
        frq[vec[r]]++;

        // Discard lth element
        if(frq[vec[l]] == 1) distElemsInWindow--;
        frq[vec[l]]--;
        l++;

        // Update penalty
        penalty = min(penalty, distElemsInWindow);
    }

    cout << penalty << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}