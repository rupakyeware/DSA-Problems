#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

class Structure {
    private:
    map<int, int> m;
    int sum = 0;

    public:
    void add(int x) {
        m[x]++;
        sum += x;
    }

    void remove(int x) {
        if(m.find(x) != m.end()) {
            sum -= x;
            if(m[x] > 1) m[x]--;
            else if(m[x] == 1) {
                m.erase(x);
            }
        }
    }

    void printMin() {
        if(m.empty()) {
            cout << -1 << endl;
            return;
        }
        int minNum = m.begin()->first;
        cout << minNum << endl;
    }

    void printMax() {
        if(m.empty()) {
            cout << -1 << endl;
            return;
        }
        int maxNum = m.rbegin()->first;
        cout << maxNum << endl;
    }

    void printSum() {
        cout << sum << endl;
    }
};

void solve() {
    int q; cin >> q;
    Structure str;

    while(q--) {
        int query; cin >> query;

        if(query == 1) {
            int x; cin >> x;
            str.add(x);
        }
        else if(query == 2) {
            int x; cin >> x;
            str.remove(x);
        }
        else if(query == 3) {
            char c; cin >> c;
            str.printMin();
        }
        else if(query == 4) {
            char c; cin >> c;
            str.printMax();
        }
        else if(query == 5) {
            char c; cin >> c;
            str.printSum();
        }
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