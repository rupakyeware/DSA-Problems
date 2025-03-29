#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int MAX = 1e6;

// Declared n and the vector globally so checking edge cases in check() is easier
int n; 
vector<int> v(MAX);

bool check(int mid) {
    if(mid == n - 1) return true; // If mid is the last element in the vector, it's the peak
    if(v[mid] > v[mid + 1]) return true; // If mid is greater than the next element, moving to the left may give us the peak
    else return false;
}

void solve() {
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> v[i];

    int low = 0, high = n - 1, mid = low + (high - low) / 2, ans = -1;
    while(low <= high) {
        if(check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        mid = low + (high - low) / 2; 
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