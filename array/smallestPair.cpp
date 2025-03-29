#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n; 
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m = arr[0] - 0, ans = INT_MAX;

    for(int i = 1; i < n; i++) {
        ans = min(ans, m + arr[i] + i);
        m = min(m, arr[i] - i);
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}