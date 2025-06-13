#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    // Count the number of distinct elements in the array
    unordered_set<int> s;
    for(int i: vec) s.insert(i); 
    int size = s.size();

    // Find the smallest subarr with all distinct elements
    int l = 0, shortest = INT_MAX;
    unordered_map<int, int> frq;
    for(int r = 0; r < n; r++) {
        frq[vec[r]]++;
        while(frq.size() >= size) {
            int currLen = r - l + 1;
            shortest = min(shortest, currLen);
            if(frq[vec[l]] == 1) frq.erase(vec[l]);
            else frq[vec[l]]--;
            l++;
        }
    }

    cout << shortest << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}