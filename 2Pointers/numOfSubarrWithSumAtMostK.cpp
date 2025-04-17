#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, k; cin >> n >> k;    
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    int tail = 0, head = 0;
    int currSum = 0;
    int cnt = 0;
    while(head < n) {         
        currSum += vec[head];

        while(currSum > k && tail <= head) {
            currSum -= vec[tail];
            tail++;
        }

        cnt += head - tail + 1;

        head++;
    }

    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}