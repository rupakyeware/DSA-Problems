#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

// To try make k subarrays of max size mid
bool check(vector<int> &v, int n, int k, int mid) {
    int subarrs_made = 0; // start with 0 subarrs
    int sum_of_curr_subarr = mid; // start with max sum so new subarr will be created for v[0]
    
    for(int i = 0; i < n; i++) {
        if(v[i] > mid) return false; // if v[i] has a value greater than max sum
        if(sum_of_curr_subarr + v[i] <= mid) { // v[i] can be added to current subarr
            sum_of_curr_subarr += v[i];
        }
        else {
            subarrs_made++; // create a new subarr
            if(subarrs_made > k) return false; // check if we are under the limit of k subarrs
            sum_of_curr_subarr = v[i]; // start with value of v[i] as sum of curr subarr
        }
    }

    return true;
}

void solve() {
    int n, k, sum = 0; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    // Max sum  will be of one subarr covering full arr, which will be the sum of the arr, and then k-1 empty subarrs
    int lo = 0, hi = sum, ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(check(v, n, k, mid) == 1) {
            hi = mid - 1;
            ans = mid;
        }
        else {
            lo = mid + 1;
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