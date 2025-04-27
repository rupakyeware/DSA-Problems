#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, target; cin >> n >> target;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int minAbs = LLONG_MAX;
    for(int p1 = 0; p1 < n - 2; p1++) {
        int p2 = p1 + 1;
        int p3 = n - 1;
        while(p2 < p3) {
            int currSum = vec[p1] + vec[p2] + vec[p3];
            int currDiff = llabs(currSum - target);
            minAbs = min(currDiff, minAbs);
            
            if(currSum < target) p2++;
            else if(currSum > target) p3--;
            else break;
        }
    }

    cout << minAbs << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}