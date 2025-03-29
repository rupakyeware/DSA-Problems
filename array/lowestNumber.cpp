#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int lowest = INT_MAX, idx = INT_MAX;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x < lowest) {
            lowest = x;
            idx = i+1;
        }
    }

    cout << lowest << ' ' << idx << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}