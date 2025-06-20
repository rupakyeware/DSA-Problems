#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

string A, B; 
int sA, sB;

int movePointers(int i, int j, vector<vector<int>> &dp) {
    // pruning
    if(i == sA && j == sB) return 0; // both strings have been exhausted

    // base case 
    if(i == sA) return sB - j; // only A has been exhausted, so add remaining chars from B to A
    if(j == sB) return sA - i; // only B has been exhausted, so remove remaining chars from A

    // cache check 
    if(dp[i][j] != INT_MAX) return dp[i][j];

    int ans = 0;
    // transition 
    if(A[i] == B[j]) ans = 1 + movePointers(i+1, j+1, dp);
    else {
        ans = min(1 + movePointers(i+1, j, dp), 1 + movePointers(i, j+1, dp));
    }

    // save and return 
    return dp[i][j] = ans;
}

string retrace(vector<vector<int>> &dp) {
    string ans = "";
    int i = 0, j = 0; // start checking from the beginning of both strings

    while(i < sA || j < sB) { // either of the strings is yet to be traversed
        if(i == sA && j < sB) { // A has been traversed but B is still remaining so add all as +ve from B
            while(j < sB) {
                ans += "+" + string(1, B[j]);
                j++;
            }
        }
        else if(j == sB && i < sA) { // B has been traversed but A is still remaining so remove all as -ve from A
            while(i < sA) {
                ans += "-" + string(1, A[i]);
                i++;
            }
        }
        else if(A[i] == B[j]) { // characters are matching so add just the element
            ans += string(1, A[i]);
            i++; j++;
        }
        else { // both strings are yet to be traversed fully
            int moveA = (i + 1 <= sA ? dp[i+1][j] : INT_MAX); // if we move A ahead (-ve)
            int moveB = (j + 1 <= sB ? dp[i][j+1] : INT_MAX); // if we move B ahead (+ve)

            if(moveA < moveB) { // moving A ahead gives a smaller string
                ans += "-" + string(1, A[i]);
                i++;
            }
            else { // moving B ahead gives a smaller string
                ans += "+" + string(1, B[j]);
                j++;
            }
        }
    }

    return ans;
}

void solve() {
    cin >> A >> B;
    sA = A.size(); sB = B.size();
    vector<vector<int>> dp(sA + 1, vector<int> (sB + 1, INT_MAX));
    cout <<  movePointers(0, 0, dp) << endl;
    cout << retrace(dp) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}