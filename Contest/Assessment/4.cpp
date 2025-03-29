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
    int n, c = 0; cin >> n;
    vector<int> v(n);
    int npos = 0, nneg = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] > 0) npos++;
        if(v[i] < 0) nneg++;
    }
    if(nneg && npos) {
        c += (((fact_arr[nneg] * bin_pow(fact_arr[nneg - 1], MOD - 2)) % MOD) * ((fact_arr[npos] * bin_pow(fact_arr[npos - 1], MOD - 2)) % MOD)) % MOD;
    }
    c += nneg;
    cout << c << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fact();

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}