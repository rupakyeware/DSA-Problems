#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // Sort the vector
    sort(v.begin(), v.end());

    int count = 0;
    
    // v[j] <= x - v[i] 
    for(int i = 0; i < n; i++) {
        int j = upper_bound(v.begin(), v.end(), x - v[i]) - v.begin(); // Find the index (count) of the elements that satisfy the above equation
        if(v[i] <= x - v[i]) j--; // X lies inside the range, so it's pairing up with itself. Subtract 1 to fix this
        count += j;
    }

    cout << count << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}