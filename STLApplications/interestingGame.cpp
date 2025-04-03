#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vA(n), vB(n);
    priority_queue<pair<int, int>> best_element;

    for(int i = 0; i < n; i++) cin >> vA[i];
    for(int i = 0; i < n; i++) cin >> vB[i];
    for(int i = 0; i < n; i++) best_element.push({vA[i]+vB[i], i}); // Order best elements by A[i] + B[i] using heap

    int pointsA = 0, pointsB = 0;

    for(int i = 0; i < n; i++) {
        pair<int, int> best = best_element.top();
        if(i % 2 == 0) { // Add points to A
            pointsA += vA[best.second];
        }
        else { // Add points to B
            pointsB += vB[best.second];
        }
        best_element.pop();
    }

    if(pointsA > pointsB) cout << "Alice" << endl;
    else if(pointsB > pointsA) cout << "Bob" << endl;
    else cout << "Tie" << endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}