#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first + a.second > b.first + b.second;
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    
    sort(v.begin(), v.end(), compare);

    int scoreA = 0, scoreB = 0;

    for(int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            scoreA += v[i].first;
        }
        else {
            scoreB += v[i].second;
        }
    }

    cout << scoreA - scoreB << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}