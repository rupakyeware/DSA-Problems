#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define MAX 1000000
using namespace std;

void solve() {
    int n, k, q; cin >> n >> k >> q;
    vector<int> v(MAX, 0);

    int students = n;
    while(students--) {
        int l, r; cin >> l >> r;
        v[l]++;
        v[r+1]--;
    }

    
    vector<int> prefixArr(MAX);
    
    for(int i = 1; i <= MAX; i++) {
        prefixArr[i] = prefixArr[i-1] + v[i];
    }
    
    vector<int> goodNumCountArray(MAX);

    for(int i = 1; i <= MAX; i++) {
        if(prefixArr[i] >= k) goodNumCountArray[i] = 1;
    }

    vector<int> goodNumPrefixArr(MAX, 0);

    for(int i = 1; i <= MAX; i++) {
        goodNumPrefixArr[i] = goodNumPrefixArr[i-1] + goodNumCountArray[i];
    }

    // for(int i = 0; i <= MAX; i++) cout << goodNumPrefixArr  [i] << " ";

    while(q--) {
        int l, r; cin >> l >> r;

        int ans = goodNumPrefixArr[r] - goodNumPrefixArr[l - 1];
        cout << ans << endl;
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