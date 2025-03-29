#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int start = 0, end = n - 1;
    while(start < end) {
        if(arr[start] != arr[end]) {
            cout << "NO" << endl;
            return;
        }
        start++;
        end--;
    }
    cout << "YES" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}