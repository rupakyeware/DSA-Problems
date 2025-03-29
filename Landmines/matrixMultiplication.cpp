#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, m, p; cin >> n >> m >> p;
    int m1[n][m], m2[m][p], m3[n][p];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> m1[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> m2[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        int x = 0;
        while(x < p) {
            int sum = 0;
            for(int j = 0; j < m; j++) {
                sum += m1[i][j] * m2[j][x];
            }
            m3[i][x] = sum;
            x++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << m3[i][j] << ' ';
        }
        cout << endl;
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