#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void makeCombination(string s, string t)
{
    int i;
    for (i = 0; i < min(s.length(), t.length()); i++)
    {
        cout << s[i] << t[i];
    }
    cout << s.substr(i) << t.substr(i) << endl;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    makeCombination(s, t);
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