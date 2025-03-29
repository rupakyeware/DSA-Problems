#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int q; cin >> q;
    set<int> st; // created an empty set named s
    while(q--) {
        string s; cin >> s; // taking input of the type of query to be performed
        if(s == "add") {
            int x; cin >> x;
            st.insert(x); // Add x to the set
        }
        else if(s == "erase") {
            int x; cin >> x;
            st.erase(x); // Erase element will value x from set
        }
        else if(s == "find") {
            int x; cin >> x;
            if(st.find(x) != st.end()) cout << "YES" << endl; // If the pointer returned by st.find(x) is not st.end() print YES
            else cout << "NO" << endl; // Else print NO
        }
        else if(s == "print") {
            for(auto it: st) {
                cout << it << ' '; 
            } cout << endl;
        }
        else if(s == "empty") {
            st.clear();
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