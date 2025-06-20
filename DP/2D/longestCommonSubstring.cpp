// #include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string A, B;
int sA, sB;

int rec(int i, int j, vector<vector<int>> &dp) {
    if(i == -1 || j == -1) return 0;

    // cache check
    if(dp[i][j] != -1) return dp[i][j];

    // transition
    int ans = 0;
    if(A[i] == B[j]) ans = 1 + rec(i-1, j-1, dp);

    // save and return
    return dp[i][j] = ans;
}

void solve() {
    cin >> A >> B;
    sA = A.size();
    sB = B.size();
    vector<vector<int>> dp(sA + 1, vector<int> (sB + 1, -1));
    
    int maxi = 0;
    for(int i = sA - 1; i >= 0; i--) {
        for(int j = sB - 1; j >= 0; j--) {
            maxi = max(maxi, rec(i, j, dp));
        }
    }

    cout << maxi << endl;

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int _t;
    cin >> _t;
    while(_t--) solve();
    return 0;
}