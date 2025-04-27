#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    string num; cin >> num;
    int right_most_digit = -1, idx;
    int len = num.size();

    
    // Find the right most non zero digit
    for(int i = 0; i < len; i++) {
        int val = num[i] - '0';
        if(val) {
            right_most_digit = val;
            idx = i;
        }
    }
    
    // Remove all digits after idx
    int numsRemoved = 0;
    numsRemoved += len - idx - 1;

    // Remove all non-zero digits before idx
    for(int i = 0; i < idx; i++) {
        if(num[i]-'0' > 0) {
            numsRemoved++;
        }
    }

    cout << numsRemoved << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}