#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool check(vector<int> &v, int n, int k, int mid) {
    int last_painter_time_left = 0; // The time left for the last painted spawned to finish painting the current wall
    int num_painters_used = 0; // Number of painters that have been used till now

    for(int i = 0; i < n; i++) {
        if(last_painter_time_left >= v[i]) { // Current painter can paint the wall fully
            last_painter_time_left -= v[i];
        }
        else {
            num_painters_used++; // Call a new painter
            if(num_painters_used > k) return false; // More painters than condition have been used so return false
            last_painter_time_left = mid; // Assign mid time to the new painter
            if(last_painter_time_left >= v[i]) { // New painter can paint the walll fully
                last_painter_time_left -= v[i];
            }
            else return false; // Wall is too big to finish in mid time so return false
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

    // Binary search on answer space to find what is the minimum amount of time needed
    // Essentially it's a trial and error method to find the minimum time using binary search
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

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}