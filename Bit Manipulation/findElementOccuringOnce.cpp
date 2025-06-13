#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    int ans = 0;
    // Loop through each bit
    for(int i = 0; i < 32; i++) {
        int sum = 0;

        // Loop through each element
        for(int j = 0; j < n; j++) sum += vec[j] & (1 << i); // Add the val of the 2^ith bit to the sum

        // If sum isn't divisble by 3, the ith bit is set in the unique element
        if(sum % 3) ans = ans | (1 << i);
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