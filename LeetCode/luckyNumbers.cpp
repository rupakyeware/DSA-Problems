// question URL - https://codeforces.com/problemset/problem/630/C

#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int bin_pow(int a, int b) {
    if (b == 0) return 1;

    int ans = bin_pow(a, b/2);
    ans = ans * ans;

    if(b%2) return ans * a;
    return ans;
}

void solve() {
    int n; cin >> n;
    cout << (2 * (bin_pow(2, n) - 1)) << endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}