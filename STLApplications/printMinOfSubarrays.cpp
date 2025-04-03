#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

class montone_deque {
    deque<int> dq;
    public:
    void insert(int x) {
        while(!dq.empty() && dq.back() > x) dq.pop_back();
        dq.push_back(x);
    }

    void erase(int x) {
        if(dq.front() == x) dq.pop_front();
    }

    int getMin() {
        return dq.front();
    }
};

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    montone_deque md;

    for(int i = 0; i < n; i++) {
        md.insert(v[i]);
        if(i >= k) md.erase(v[i-k]);
        if(i >= k - 1) cout << md.getMin() << " ";
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