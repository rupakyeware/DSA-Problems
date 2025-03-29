#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7; //change this according to the mod given in the question
const int MAX = 1e6; // change this according to the max value of n given in the constraints

vector<int> fact_arr(MAX);

void fact() {
    fact_arr[0] = 1;

    for(int i = 1; i < MAX; i++) {
        fact_arr[i] = (i * fact_arr[i-1]) % MOD;
    }

}

int bin_pow(int a, int b) {
    if (b == 0) return 1;

    int ans = bin_pow(a, b/2);
    ans = (ans * ans) % MOD;

    if(b%2) return (ans * a) % MOD;
    return ans;
}

void solve() {
    int n, r; cin >> n >> r;
    cout << (fact_arr[n] * bin_pow((fact_arr[r] * fact_arr[n-r]) % MOD, MOD-2)) % MOD << endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fact();

    int _t = 1;
    cin >> _t;

    while(_t--) solve();
    return 0;
}