#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void print_union(vector<int> v1, int n, vector<int> v2, int m) {
    vector<int> result;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));

    for(int it: result) {
        cout << it << ' ';
    } cout << endl;
}

void print_int(vector<int> v1, int n, vector<int> v2, int m) {
    vector<int> result;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));

    for(int it: result) {
        cout << it << ' ';
    } cout << endl;
}

void print_diff(vector<int> v1, int n, vector<int> v2, int m) {
    vector<int> result;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));

    for(int it: result) {
        cout << it << ' ';
    } cout << endl;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);

    for(int i = 0; i < n; i++) cin >> v1[i];
    for(int i = 0; i < m; i++) cin >> v2[i];

    print_union(v1, n, v2, m);
    print_int(v1, n, v2, m);
    print_diff(v1, n, v2, m);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}