#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void pop(string &str) {
    str.pop_back();
}

char front(string &str) {
    return str[0];
}

char back(string &str) {
    return str.back();
}

void sort_l_r(string &str, int l, int r) {
    sort(str.begin() + l - 1, str.begin() + r);
}

void reverse_l_r(string &str, int l, int r) {
    reverse(str.begin() + l - 1, str.begin() + r);
}

char pos(string &str, int p) {
    return str[p - 1];
}

string subs(string &str, int l, int r) {
    return str.substr(l - 1, r - l + 1);
}

void push(string &str, char x) {
    str.push_back(x);
}

void solve() {
    int n, q;
    std::string str;
    cin >> n >> q;
    cin >> str;
    while(q >= 0) {
        string op;
        cin >> op;
        if(op == "pop_back") {
            pop(str);
            // cout << "pop: " << str << endl;
        }
        else if(op == "front") {
            cout << front(str) << endl;
        }
        else if(op == "back") {
            cout << back(str) << endl;
        }
        else if(op == "sort") {
            int l, r; cin >> l >> r;
            sort_l_r(str, min(l, r), max(l, r));
            // cout << "sort: " << str << endl;
        }
        else if(op == "reverse") {
            int l, r; cin >> l >> r;
            reverse_l_r(str, min(l, r), max(l, r));
            // cout << "reverse: " << str << endl;
        }
        else if(op == "print") {
            int p; cin >> p;
            cout << pos(str, p) << endl;
        }
        else if(op == "substr") {
            int l, r; cin >> l >> r;
            cout << subs(str, min(l, r), max(l, r)) << endl;
        }
        q--;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}