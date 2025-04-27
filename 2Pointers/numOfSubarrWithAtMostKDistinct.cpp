#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

const int MAX = 1e5;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    // Create a frequency array
    vector<int> freq(MAX);

    int tail = 0; // To delete element from window
    int head = 0; // To consume element into window
    int currCount = 0; // Num of distinct elements in current window
    int ans = 0;

    while(head < n) {
        freq[vec[head]]++;
        if(freq[vec[head]] == 1) currCount++;

        while(currCount > k && tail <= head) {
            if(freq[vec[tail]] == 1) currCount--;
            freq[vec[tail]]--;
            tail++;
        }

        ans += head - tail + 1;
        head++;
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}