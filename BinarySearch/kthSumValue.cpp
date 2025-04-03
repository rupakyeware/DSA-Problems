// In this question, we perform a binary search on the answer space. We have to check if the number of elements less than mid 
// are less than or equal to k. The first '1' will be our answer.

// But to check the number of elements less than or equal to k, we will have to perform a second binary search. 
// We will iterate through the n vector and perform a binary search on the m vector to find the number of values less than equal to k.

#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

// Returns true if mid <= target, else false
bool checkIfLTEk(int mid, int target) {
    if(mid <= target) return true;
    else return false;
}

// Performs a 2nd binary search that returns true if number of vals from C that are <= mid are >= k
bool numOfVals(vector<int> &vn, vector<int> &vm, int n, int m, int mid, int k) {
    int total = 0;
    // O(nlog(m))
    for(int i = 0; i < n; i++) {
        // Binary search to find the number of elements <= mid
        int lo = 0, hi = m - 1, ans = -1;
        while(lo <= hi) {
            int mid2 = lo + (hi - lo) / 2;
            if(checkIfLTEk(vn[i] + vm[mid2], mid)) {
                lo = mid2 + 1;
                ans = mid2;
            }
            else {
                hi = mid2 - 1;
            }
        }
        total += (ans + 1);
        if(total >= k) return true;
    }

    return false;
}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> vn(n); vector<int> vm(m);

    for(int i = 0; i < n; i++) cin >> vn[i];
    for(int i = 0; i < m; i++) cin >> vm[i];

    // Make sure the n vector is smaller than the m vector in size.
    // This is because in the second binary search, we will iterate through the n vector
    if(n > m) { 
        swap(n, m);
        swap(vn, vm);
    }

    // Sort both the vectors to prepare them for our 2nd binary search
    // O(nlog(m))
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    // Binary search on answer space
    // This will check if number of values LTE mid are >= k
    // O(log(MAX))
    int lo = vn[0] + vm[0], hi = vn[n-1] + vm[m-1], ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(numOfVals(vn, vm, n, m, mid, k)) {
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