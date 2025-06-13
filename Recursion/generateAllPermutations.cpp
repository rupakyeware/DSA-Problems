#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

set<vector<int>> ans;

void addAns(vector<int> &v) {
    ans.insert(v);
}

void recur(vector<int> v, int level, int n) {
    if(level == n) { // base case: current permutation is finished
        addAns(v);
        return;
    }

    // swap and call func again for each level after current level
    for(int i = level; i < n; i++) {
        swap(v[level], v[i]); // swap element at current index with ith element after current index
        recur(v, level + 1, n); // call func again for next level
    }
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    recur(v, 0, n);

    for(vector<int> vec: ans) {
        for(int e: vec) cout << e << " ";
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}