#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void add(int x, queue<int> &s) {
    s.push(x);
}

void print(queue<int> &s) {
    if(!s.empty()) cout << s.front() << endl;
    else cout << 0 << endl;
}

void remove(queue<int> &s) {
    if(!s.empty()) s.pop();
}

void solve() {
    queue<int> st;
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        if(s == "add") {
            int x; cin >> x;
            add(x, st);
        }
        else if(s == "print") {
            print(st);
        }
        else if(s == "remove") {
            remove(st);
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