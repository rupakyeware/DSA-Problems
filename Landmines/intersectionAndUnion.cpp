#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int getUnion(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int intersection) {
    int totalArea = ((x2 - x1) * (y2 - y1) + (x4 - x3) * (y4 - y3)) - intersection;
    return totalArea;
}

int getIntersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int x5 = max(x1, x3);
    int y5 = max(y1, y3);
    int x6 = min(x2, x4);
    int y6 = min(y2, y4);

    if (x5 < x6 && y5 < y6) {
        return (x6 - x5) * (y6 - y5);
    }
    return 0;
}

void solve() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int inter = getIntersection(x1, y1, x2, y2, x3, y3, x4, y4);
    cout << inter << ' ' << getUnion(x1, y1, x2, y2, x3, y3, x4, y4, inter) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while (_t--) solve();
    return 0;
}
