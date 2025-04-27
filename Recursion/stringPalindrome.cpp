#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

// A function that accepts the input string, start index and end index. Returns true if the string is a palindrome, else false
bool isPalindrome(string s, int start, int end) {
    if(start >= end) return true; // Same character or window size is 0
    if(s[start] != s[end]) return false; // Opposite chars don't match
    return isPalindrome(s, ++start, --end); // Result depends on string between start and end
}

void solve() {
    string s; cin >> s;
    int len = s.size();
    cout << isPalindrome(s, 0, len - 1) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}