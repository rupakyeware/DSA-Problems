#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool check(int mid, int x) {
    if (mid >= x) return true;
    else return false;
}

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) cin >> v[i];

    int low = 0, high = n - 1, mid = low + (high - low) / 2, ans = -1;
    while(low <= high) {
        if(check(v[mid], x)) {
            ans = mid;
            high = mid - 1;
            mid = low + (high - low) / 2;
        }
        else {
            low = mid + 1;
            mid = low + (high - low) / 2;
        }
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}