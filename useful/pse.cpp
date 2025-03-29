#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    stack<int> st;
    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && v[i] < v[st.top()]) {
            v[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()) {
        v[st.top()] = -1;
        st.pop();
    }

    for(int i: v) cout << i << " ";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}