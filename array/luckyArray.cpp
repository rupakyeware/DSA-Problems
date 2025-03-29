#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n; int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int min = *min_element(arr, arr+n), c = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == min) c++;
    }
    cout << (c % 2 != 0 ? "Lucky" : "Unlucky") << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}