#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int MAX = 1e6;

int n, q; 
vector<int> v(MAX);

bool findPeak(int mid) {
    if(mid == n - 1) return true;

    if(v[mid] > v[mid+1]) return true;
    else return false;
}

void solve() {
    cin >> n >> q;
    for(int i = 0; i < n; i++) cin >> v[i];
    
    // Find the peak
    int peak = -1;
    int low = 0, high = n - 1, mid = low + (high - low) / 2;
    while(low <= high) {
        if(findPeak(mid)) {
            high = mid - 1;
            peak = mid;
        }
        else {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }

    while(q--) {
        int k; cin >> k;

        // binary search from left-bottom to peak to find k
        low = 0, high = peak, mid = low + (high - low) / 2;
        int pos_l = -1;
        while(low <= high) {
            if(v[mid] == k) {
                pos_l = mid;
                break;
            }
            else {
                if(v[mid] < k) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
                mid = low + (high - low) / 2;
            }
        }

        // binary search from peak to right-bottom to find k
        low = peak + 1, high = n - 1, mid = low + (high - low) / 2;
        int pos_r = -1;
        while(low <= high) {
            if(v[mid] == k) {
                pos_r = mid;
                break;
            }
            else {
                if(v[mid] > k) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
                mid = low + (high - low) / 2;
            }
        }
        if(pos_l > -1 && pos_r > -1) cout << pos_l + 1 << " " << pos_r + 1 << endl;
        else if(pos_l > -1) cout << pos_l + 1 << endl;
        else cout << pos_r + 1 << endl;
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