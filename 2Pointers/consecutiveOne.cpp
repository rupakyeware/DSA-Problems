#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int h = -1, t = 0, ans = 0;
    int zeroes = 0;
    while(h < n) {
        // check if we can consume the next element
        while(h + 1 < n && ((1 - v[h+1]) + zeroes <= k)) {
            h++;
            if(v[h] == 0) zeroes++;
        }

        ans = max(ans, h - t + 1); // set ans as curr length of subarr if it's > ans

        if(t > h) { // if h < t, it may get stuck. So move tail one step ahead and place head right behind it
            t++;
            h = t - 1;
        }
        else { // check if tail current points to a zero. If yes, decrement zeroes and move tail ahead
            if(v[t] == 0) zeroes--;
            t++;
        }
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