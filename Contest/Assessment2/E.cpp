#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

bool check(vector<pair<int, int>> line, int people, int mid){
    int s = line.size();
    int peoplePlaced = 0;
    for(int i = 0; i < s; i++) {
        int line_size = line[i].second - line[i].first + 1;
        if(line_size == 1) peoplePlaced += 1;
        else {
            int canPlace = (line_size + mid - 1) / mid;
            peoplePlaced += canPlace;
        }
    }
    return peoplePlaced >= people;
}

void solve() {
    int x, y; cin >> x >> y;
    vector<pair<int, int>> line;
    int maxDiff = INT_MIN;

    for(int i = 0; i < y; i++) {
        int start, end; cin >> start >> end;
        line.push_back({start,end});
        maxDiff = max(maxDiff, end - start + 1);
    }

    int lo = 1, hi = LLONG_MAX, ans = maxDiff;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(check(line, x, mid) == 1) {
            lo = mid + 1;
            ans = mid;
        }
        else {
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}