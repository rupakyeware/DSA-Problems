#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool check(vector<int> &v, int n, int k, int mid){
    int points_used = 0;
    for(int i = 0; i < n - 1; i++) {
        int gap = v[i+1] - v[i];
        // To calculate the points needed, the formula (gap / mid) will work for imperfect divisions
        // But not for perfect divisions
        // So we add (mid - 1) to the numerator and subtract one to make it an imperfect division 
        // Now we'll always get 1 more point than required and then we subtract 1 to get the correct output
        int points_needed = (gap + mid - 1) / mid - 1; 
        points_used += points_needed;
        if(points_used > k) return false; 
        // cout << "At " << v[i] << " the total points are " << points_used << endl;
    }

    return true;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];

    int lo = 1, hi = v[n-1]-v[0], ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(check(v, n, k, mid) == 1) {
            // cout << "mid as " << mid << " worked!" << endl;
            hi = mid - 1;
            ans = mid;
        }
        else {
            // cout << "mid as " << mid << " didnt work!" << endl;
            lo = mid + 1;
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