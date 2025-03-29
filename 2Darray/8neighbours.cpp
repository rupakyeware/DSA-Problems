#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> x >> y;
    x--;
    y--;

    vector<pair<int, int>> dirs = { {-1, -1},
                                    {-1, 0},
                                    {-1, 1},
                                    {0, -1},
                                    {0, 1},
                                    {1, -1},
                                    {1, 0},
                                    {1, 1} };
    for(auto d : dirs) {
        int nx = x + d.first;
        int ny = y + d.second;
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] == '.') {
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t;
    cin >> _t;

    while (_t--)
        solve();
    return 0;
}