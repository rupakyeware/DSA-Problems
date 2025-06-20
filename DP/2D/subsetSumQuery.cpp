#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
// #include<bits/stdc++.h>
using namespace std;
#define MAX 1e5

#define ll int64_t


int dfs(vector<int> &arr, vector<vector<int>> &dp, vector<int> &queries, int query_idx, int idx, int remainingSum) {
    // pruning
    if(remainingSum < 0) return 0;

    // base case
    if(idx == -1) {
        if(remainingSum == 0) return 1;
        else return 0;
    }

    // cache check
    if(dp[idx][remainingSum] != -1) return dp[idx][remainingSum];

    // transitions if we don't pick or pick current idx
    int ans = dfs(arr, dp, queries, query_idx, idx - 1, remainingSum) || dfs(arr, dp, queries, query_idx, idx - 1, remainingSum - arr[idx]);

    // save and return
    return dp[idx][remainingSum] = ans;

}

vector<vector<int>> subset_queries(vector<int> &arr, vector<int> &queries) {
    int n = arr.size();
    vector<vector<int>> ans; // final ans vector
    vector<vector<int>> dp(n + 1, vector<int> (1e5 + 1, -1)); // 2D dp grid

    for(int i = 0; i < queries.size(); i++) {
        vector<int> currAns; // ans to current query
        int possible = dfs(arr, dp, queries, i, n - 1, queries[i]); // will return 1 or 0 
        // if it's possible to create a subset sum for the current query, recreate the path
        if(possible) {
            int remainingSum = queries[i], idx = n-1; // start from the last element to see if it was picked or not
            while(remainingSum > 0 && idx >= 0) {
                if(dfs(arr, dp, queries, queries[i], idx - 1, remainingSum - arr[idx])) { // if ith element was picked, dfs(i-1, sum-arr[i]) should return 1
                    currAns.push_back(idx);
                    remainingSum -= arr[idx];
                }
                idx--; // move to the next element
            }
            // right now, our vector has the elements in the order of last->first
            // reverse it to make it first->last
            reverse(currAns.begin(), currAns.end());
            ans.push_back(currAns); // push current query's answer to 2D answer vector
        }
        else ans.push_back({-1}); // not possible to solve current query, so append -1 to 2D answer vector
    }

    return ans;
}


void solve() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)cin >> arr[i];
    vector<int> queries(Q);
    for (int i = 0; i < Q; i++)cin >> queries[i];
    auto ans = subset_queries(arr, queries);

    // checker.
    if (ans.size() != Q) {
        cout << 101 << endl;
        return;
    }
    for (int i = 0; i < Q; i++) {
        auto x = ans[i];
        if (x.size() == 0) {
            cout << 101 << endl;
            continue;
        }
        if (x.size() == 1 && x[0] == -1) {
            cout << -1 << endl;
            continue;
        }
        ll sum = 0, p = -10;
        for (auto y : x) {
            if (y < 0 || y >= N || p >= y ) { // valid 0-indexed.
                sum = -1111;
                break;
            }
            p = y;
            sum += arr[y];
        }
        if (sum == queries[i]) {
            cout << 1 << endl;
        }
        else cout << 101 << endl;
    }
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

#ifdef Mastermind_
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // int i = 1;
    // cin >> t;
    while (t--) {
        // cout << "Case #" << i << ": ";
        solve();
        // i++;
    }
    return 0;
}
