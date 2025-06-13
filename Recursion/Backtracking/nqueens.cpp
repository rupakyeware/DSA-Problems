#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;
#define MAX 10

int n;
vector<int> board(MAX);

bool check(int level, int col) {
    for(int prev = 0; prev < level; prev++) {
        // Conditions when attack can happen
        // 1. prev row has the same value as col 
        // 2. distance between rows is the same as the distance between cols (diagonal)
        if(board[prev] == col || abs(level - prev) == abs(col - board[prev])) return false;
    }
    return true;
}

int findMoves(int level) {
    if(level == n) { // base case: we have traversed all possible choices
        for(int i = 0; i < n; i++) cout << board[i] << " ";
        cout << endl;
        return 1;
    }
    
    int moves = 0;

    for(int ch = 0; ch < n; ch++) {
        if(check(level, ch)) {
            board[level] = ch; // place the queen in the valid position
            int currMoves = findMoves(level + 1); // find the number of solutions in next levels with the queen placed at the ch col at this level
            moves += currMoves; 
            board[level] = -1; // unplace the queen we just set to check for more choices at the current level
        }
    }

    return moves;
}

void solve() {
    cin >> n;
    cout << findMoves(0) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}