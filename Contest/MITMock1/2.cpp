#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void displayPartition(int p, vector<int> v) {
    for(int i = 0; i <= p; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    for(int i = p + 1; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

void solve() {
    int n, totalSum = 0, currSum = 0; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        totalSum += v[i];
    }

    for(int i = 0; i < n; i++) {
        currSum += v[i];
        if(currSum == totalSum - currSum) {
            displayPartition(i, v);
            return;
        }
    }

    cout << -1 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}