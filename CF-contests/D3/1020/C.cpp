#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);

    // Accept A
    int minA_idx = 0;
    int maxA_idx = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < a[minA_idx]) minA_idx = i;
        if(a[i] > a[maxA_idx]) maxA_idx = i;
    }

    // Accept B
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Check if all filled pairs are valid sums
    int currSum = -1;
    for(int i = 0; i < n; i++) {
        if(currSum < 0 && a[i] >= 0 && b[i] >= 0) currSum = a[i] + b[i];
        else if(currSum >= 0 && a[i] >= 0 && b[i] >= 0) {
            if(a[i] + b[i] != currSum) {
                cout << 0 << endl;
                return;
            }
        }
    }

    if(currSum > 0 && currSum < a[maxA_idx] && b[maxA_idx] == -1) {
        cout << 0 << endl;
        return;
    }
    else if(currSum > 0 && currSum > k) {
        cout << 0 << endl;
        return;
    }
    else if(currSum > 0) {
        cout << 1 << endl;
        return;
    }

    int upper_bound = k, lower_bound = a[maxA_idx] - a[minA_idx];
    // cout << "upper: " << upper_bound << " lower: " << lower_bound << endl;
    cout << upper_bound - lower_bound + 1 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}