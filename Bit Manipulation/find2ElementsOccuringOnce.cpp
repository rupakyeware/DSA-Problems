#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0;i < n; i++) cin >> vec[i];

    // Get the xor of the entire array
    int XOR = 0;
    for(int i: vec) XOR ^= i;

    int lsb = XOR & ~(XOR-1);

    vector<int> s1; // array containing set lsb
    vector<int> s2; // array containing unset lsb

    for(int i: vec) {
        if(lsb & i) s1.push_back(i);
        else s2.push_back(i);
    }

    // Find 1st ans
    XOR = 0;
    for(int i: s1) XOR ^= i;
    cout << XOR << " ";

    // Find 2nd ans
    XOR = 0;
    for(int i: s2) XOR ^= i;
    cout << XOR << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}