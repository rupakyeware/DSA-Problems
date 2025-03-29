#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

char getGrade(int m, int f, int r) {
    if(m < 0 || f < 0) return 'F';
    int total = m + f;
    if(total >= 80) {
        return 'A';
    }
    else if(total >= 65 && total < 80) {
        return 'B';
    }
    else if(total >= 50) {
        return 'C';
    }
    else if(total >= 30) {
        if(r >= 50) {
            return 'C';
        } else return 'D';
    }
    else return 'F';
}

void solve() {
    int m, f, r; cin >> m >> f >> r;
    cout << getGrade(m, f, r) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}