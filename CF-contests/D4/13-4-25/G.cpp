#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int calculateRizz(const vector<int>& v) {
    int rizz = 0;
    for (int i = 0; i < v.size(); i++) {
        rizz += v[i] * (i + 1);
    }
    return rizz;
}

void cyclicShift(vector<int>& v) {
    if (v.empty()) return;
    
    int last = v.back();
    for (int i = v.size() - 1; i > 0; i--) {
        v[i] = v[i - 1];
    }
    v[0] = last;
}

void reverse(vector<int>& v) {
    int l = 0, r = v.size() - 1;
    while (l < r) {
        swap(v[l], v[r]);
        l++;
        r--;
    }
}

void append(vector<int>& v, int x) {
    v.push_back(x);
}

void solve() {
    int q;
    cin >> q;
    vector<int> v;
    
    while (q--) {
        int operation;
        cin >> operation;
        
        if (operation == 1) {
            cyclicShift(v);
        } else if (operation == 2) {
            reverse(v);
        } else if (operation == 3) {
            int x;
            cin >> x;
            append(v, x);
        }
        
        cout << calculateRizz(v) << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}