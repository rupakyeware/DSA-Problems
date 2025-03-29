#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int getMinDistinctId(unordered_map<int, int> umap, int m) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

    for(auto i: umap) {
        minHeap.push({i.second, i.first});
    }

    while(m > 0) {
        pair<int, int> top = minHeap.top();
        cout << top.first << ' ' << top.second << endl;
        minHeap.pop();
        m--;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> umap;

    while(m--) {
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            umap[x]++;
        }
        cout << getMinDistinctId(umap, m) << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}