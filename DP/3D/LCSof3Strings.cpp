#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
// #include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

string A, B, C;
int sizeA, sizeB, sizeC;

int check(int a, int b, int c, vector<vector<vector<int>>> &dp) {
    // pruning
    if(a < 0 || a >= sizeA) return 0;
    if(b < 0 || b >= sizeB) return 0;
    if(c < 0 || c >= sizeC) return 0;

    // basecase 

    // dp check
    if(dp[a][b][c] != -1) return dp[a][b][c];

    // transition
    int ans = 0;
    if(A[a] == B[b] && B[b] == C[c]) ans = check(a-1, b-1, c-1, dp) + 1;
    else {
        ans = max({
            check(a-1, b, c, dp),
            check(a, b-1, c, dp),
            check(a, b, c-1, dp)
        });
    }

    // save and return
    return dp[a][b][c] = ans;
}

void solve() {
    cin >> A >> B >> C;
    sizeA = A.size(); sizeB = B.size(); sizeC = C.size();
    vector<vector<vector<int>>> dp(sizeA + 1, vector<vector<int>> (sizeB + 1, vector<int> (sizeC + 1, -1)));

    cout << check(sizeA-1, sizeB-1, sizeC-1, dp) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    cin >> _t;

    while(_t--) solve();
    return 0;
}