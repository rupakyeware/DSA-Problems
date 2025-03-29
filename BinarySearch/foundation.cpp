// Given an array of consecutive 0s and then consecutive 1s, find the index of the first 1

#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    // Using binary search
    int low = 0, high = n - 1, mid = low + ((high - low) / 2), ans = -1;
    while(low < high) {
        if(v[mid] == 1) {
            ans = mid; // store mid in ans as a potential answer
            high = mid - 1;
            mid = low + ((high - low) / 2);
        }
        else {
            low = mid + 1;
            mid = low + ((high - low) / 2);
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