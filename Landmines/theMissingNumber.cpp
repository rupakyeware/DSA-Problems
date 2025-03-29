#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, sumA = 0, sumB = 0, sumC = 0; cin >> n;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sumA += x;
    }

    for(int i = 0; i < n-1; i++) {
        int x; cin >> x;
        sumB += x;
    }

    for(int i = 0; i < n-2; i++) {
        int x; cin >> x;
        sumC += x;
    }

    cout << sumA - sumB << ' ' << sumB - sumC << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}