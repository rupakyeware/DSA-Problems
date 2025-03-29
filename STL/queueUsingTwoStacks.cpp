#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void moveS1ToS2(stack<int> &s1, stack<int> &s2) {
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
}

void moveS2ToS1(stack<int> &s1, stack<int> &s2) {
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}

void solve() {
    stack<int> s1;
    stack<int> s2;

    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        if(s == "push") {
            // check if s1 is empty
            // if yes moveS2ToS1
            if(!s1.size()) {
                moveS2ToS1(s1, s2);
            }
            int x; cin >> x;
            s1.push(x);
        }
        else if(s == "pop") {
            // check if s2 is empty
            // if yes moveS1ToS2
            if(!s2.size()) {
                moveS1ToS2(s1, s2);
            }
            cout << s2.top() << endl;
            s2.pop();
        }
        else if(s == "front") {
            // check if s2 is empty
            // if yes moveS1ToS2
            if(!s2.size()) {
                moveS1ToS2(s1, s2);
            }
            cout << s2.top() << endl;
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