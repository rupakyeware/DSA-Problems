#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

// Return the number of elements lte x
int cnt_lte(vector<int> &v, int x) {
    int cnt_lte = upper_bound(v.begin(), v.end(), x) - v.begin();
    return cnt_lte;
}


int cnt_lt(vector<int> &v, int x) {
    int cnt_lte = lower_bound(v.begin(), v.end(), x) - v.begin();
    return cnt_lte;
}

int gte(vector<int> &v, int x) {
    auto val = lower_bound(v.begin(), v.end(), x);
    
    if(val != v.end()) return *val;
    else return -1;
}

int gt(vector<int> &v, int x) {
    auto val = upper_bound(v.begin(), v.end(), x);
    
    if(val != v.end()) return *val;
    else return -1;
}

void solve() {
    int n, q; cin >> n >> q;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    while(q--) {
        int t, q; cin >> t >> q;
        if(t == 1) cout << gte(v, q) << " ";
        if(t == 2) cout << gt(v, q) << " ";
        if(t == 3) cout << cnt_lte(v, q) << " ";
        if(t == 4) cout << cnt_lt(v, q) << " ";
    } cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}