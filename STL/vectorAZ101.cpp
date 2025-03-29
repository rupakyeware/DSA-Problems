#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void add(int x, vector<int> &v) {
    v.push_back(x);
}

void remove(vector<int> &v) {
    v.pop_back();
}

void display(int i, vector<int> &v) {
    if(i < v.size()) cout << v[i] << endl;
    else cout << 0 << endl;
}

void empty(vector<int> &v) {
    v.clear();
}

void solve() {
    vector<int> v;
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        if(s == "add") {
            int x; cin >> x;
            add(x, v);
        }
        else if(s == "remove") {
            remove(v);
        }
        else if(s == "print") {
            int i; cin >> i;
            display(i, v);
        }
        else if(s == "clear") {
            empty(v);
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}