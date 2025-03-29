#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    int x, i = 0;
    string m;
    cin >> x >> m;
    stringstream ss(m);
    vector<string> arr(2);
    while(!ss.eof()) {
        getline(ss, arr[i], '.');
        i++;
    }
    cout << stoi(arr[1]) + x << '.' << stoi(arr[0]) + x << endl; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}