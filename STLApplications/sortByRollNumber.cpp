#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
   int n; cin >> n;
   vector<pair<int, string>> v(n);
   for(int i = 0; i < n; i++) {
    cin >> v[i].second >> v[i].first;
   }
   
   sort(v.begin(), v.end());

   for(auto i: v) cout << i.second << " " << i.first << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}