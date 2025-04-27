#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

vector<vector<int>> moves;

void print(int source, int destination) {
    moves.push_back({source, destination});
}

void towerOfHanoi(int numberOfDisks, int source, int helper, int destination) {
    if(numberOfDisks == 0) return;

    // Move upper disks to helper
    towerOfHanoi(numberOfDisks - 1, source, destination, helper); 

    // Move base to destination
    print(source, destination);

    // Move upper disks from helper to destination
    towerOfHanoi(numberOfDisks - 1, helper, source, destination);
}

void solve() {
    int n; cin >> n;
    towerOfHanoi(n, 1, 2, 3);

    int len = moves.size();
    cout << len << endl;
    for(vector<int> v: moves) {
        cout << v[0] << " " << v[1]
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}