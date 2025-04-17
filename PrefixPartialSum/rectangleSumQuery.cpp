#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

const int MOD = 1e9 + 7;

int normalize(int x) {
    return ((x % MOD) + MOD) % MOD;
}

void solve() {
    int n, m, q; cin >> n >> m >> q;
    vector<vector<int>> v(n, vector<int> (m, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
            v[i][j] = normalize(v[i][j]);
        }
    }

    // Create the 2D prefix matrix
    vector<vector<int>> prefix_v(n + 1, vector<int> (m + 1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            // Prefix of current cell = prefix of upper cell + prefix of left cell - prefix of upper left cell + value of current cell
            // prefix_v[i][j] = prefix_v[i-1][j] + prefix_v[i][j-1] - prefix_v[i-1][j-1] + v[i-1][j-1];
            int v1 = normalize(prefix_v[i-1][j]);
            int v2 = normalize(prefix_v[i][j-1]);
            int v3 = normalize(prefix_v[i-1][j-1]);
            int v4 = v[i-1][j-1];

            prefix_v[i][j] = normalize(v1 + v2 - v3 + v4);
        }
    }

    while(q--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        // First calculate area of bottom right point
        // Subtract row above top left
        // Subtract column before top left
        // Add point diagonally to the top left of top left point
        // int ans = prefix_v[x2][y2] - prefix_v[x1-1][y2] - prefix_v[x2][y1-1] + prefix_v[x1-1][y1-1];
        int v1 = normalize(prefix_v[x2][y2]);
        int v2 = normalize(prefix_v[x1-1][y2]);
        int v3 = normalize(prefix_v[x2][y1-1]);
        int v4 = normalize(prefix_v[x1-1][y1-1]);
        int ans = normalize(v1 - v2 - v3 + v4);
        cout << ans << endl;
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