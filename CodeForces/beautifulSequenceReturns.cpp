#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int lowest = INT_MAX;
    int highest = INT_MIN;
    int max_c = 0, curr_c = 0;

    for(int i = 0; i < n; i++) {
        if(v[i] < lowest && v[i] > highest) {
            lowest = v[i];
            highest = v[i];
            curr_c++;
        }

        if(curr_c > max_c) max_c = curr_c;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}