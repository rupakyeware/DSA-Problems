#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n; int arr[n], c = 0;
    bool isEven = true;
    for(int i = 0; i < n; i++) {
        int x; cin >> x; arr[i] = x;
        if(x % 2 != 0 && isEven) {
            isEven = false;
        }
    }

    while(isEven) {
        for(int i = 0; i < n; i++) {
            int a = arr[i] / 2;
            if(a % 2 != 0) {
                isEven = false;
                break;
            }
            arr[i] = a;
        }
        c++;
    }

    cout << c << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}