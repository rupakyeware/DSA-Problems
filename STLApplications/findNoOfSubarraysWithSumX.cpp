#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v(n); 

    // Computer prefix sum while taking input simultaneously. 
    // We take the input of the first element alone. Then for all the next elements,
    // we add the input with the value in the previous index
    // So we took inputs and computed prefix sum in O(n);
    cin >> v[0]; 
    for(int i = 1; i < n; i++) {
        cin >> v[i];
        v[i] += v[i-1];
    }

    unordered_map<int, int> umap;
    // Set occurence of 0 to 1 manually as we are doing in place computation of prefix array
    umap[0] = 1;

    int cnt = 0;
    // Find number of pairs where V[L-1] = V[R] - x
    for(int i = 0; i < n; i++) {
        cnt += umap[v[i] - x]; 
        umap[v[i]]++;
    }

    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}