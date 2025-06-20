#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int rec(vector<int> &nums, int idx, int x, vector<vector<int>> &dp) {
    // pruning
    if(idx+1 < x) return INT_MIN; // if the no of elements remaining is less than the parititions to make

    // base case
    if(idx == -1) {
        if(x == 0) return 0;
        else return INT_MIN;
    }

    // check dp as 1-indexed
    if(dp[idx + 1][x] != -1) return dp[idx + 1][x];

    // transitions
    int mini = INT_MAX;
    int ans = INT_MIN;
    for(int j = idx - 1; j >= -1; j--) {
        mini = min(mini, nums[j+1]);
        ans = max(ans, rec(nums, j, x - 1, dp) + mini);
    }

    return dp[idx + 1][x] = ans;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<vector<int>> dp(n + 2, vector<int> (k + 1, -1)); // dp will have to be 1-indexed as idx = -1 is a valid position to place the partition

    cout << rec(nums, n - 1, k, dp) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}