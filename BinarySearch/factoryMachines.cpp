    #include<bits/stdc++.h>
    #define int long long
    #define endl '\n'
    using namespace std;

    // Try to produce t products in mid seconds
    bool check(vector<int> &v, int n, int t, int mid) {
        int products_produced = 0;

        for(int i = 0; i < n; i++) {
            products_produced += mid / v[i]; // Calculate total products that can be produced by machine at i in mid seconds
            if(products_produced >= t) return true; // If t or more products have been produced return true;
        }

        return false;
    }

    void solve() {
        int n, t; cin >> n >> t;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // max time needed to make t products will be t * v[0], if only first machine is given the sole responsibility to make t products
        int lo = 0, hi = t * v[0], ans = -1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(check(v, n, t, mid) == 1) {
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