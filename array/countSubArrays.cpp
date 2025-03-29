#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n; int arr[n], x = 1, subArrs = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            subArrs += (x * (x + 1)) / 2;
            x = 1;
            continue;
        }
        x++;
    }
    subArrs += (x * (x + 1)) / 2;
    cout << subArrs << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}