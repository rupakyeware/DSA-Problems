#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

string give64Bit(int n) {
    string ans;
    for(int i = 63; i >= 0; i--) {
        ans.push_back((1 & (n >> i)) + '0');
    }
    return ans;
}

int msbPosition(int n) {
    for(int i = 63; i >= 0; i--) {
        int bit = 1 & (n >> i);
        if(bit) {
            return i;
        }
    }
    return -1;
}

int lsbPosition(int n) {
    for(int i = 0; i < 64; i++) {
        if(1 & (n >> i)) return i;
    }
    return -1;
}

bool isPowerOf2(int n) {
    for(int i = 1; i < 63; i++) {
        if((1LL << i) == n) return true;
    }
    return false;
}

int biggestPowerOf2IsDivisor(int n) {
    if(n == 0) return -1;
    int ans = 1;
    for(int i = 1; i < 63; i++) {
        int val = (1LL << i);
        if(n % val == 0) ans = val;
    }
    return ans;
}

int smallestPowerOf2(int n) {
    if(isPowerOf2(n)) return n;
    for(int i = 1; i < 63; i++) {
        int val = (1LL << i);
        if(val > n) return val;
    }
    return 0;
}

void solve() {
    int n; cin >> n;

    // 64-bit representation
    cout << give64Bit(n) << endl;

    // position of MSB (0-indexed)
    cout << msbPosition(n) << endl;

    // position of LSB (0-indexed)
    cout << lsbPosition(n) << endl;

    // Is n a power of 2
    cout << isPowerOf2(n) << endl;

    // Biggest power of 2 that is a divisor of n
    cout << biggestPowerOf2IsDivisor(n) << endl;

    // Smallest power of 2 greater than n
    cout << smallestPowerOf2(n) << endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}