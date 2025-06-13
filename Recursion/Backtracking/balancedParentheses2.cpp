#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define endl '\n'
using namespace std;

vector<string> balanced;
int n, k;

void addBracket(int open, int close, string ans, int currDepth, int maxDepth) {
    maxDepth = max(maxDepth, currDepth);
    if(close > open || open > n/2 || maxDepth > k || (ans.size() == n && maxDepth != k)) return;

    if(ans.size() == n && currDepth == 0 && maxDepth == k) {
        balanced.push_back(ans);
        return;
    }

    addBracket(open + 1, close, ans + "(", currDepth + 1, maxDepth);
    addBracket(open, close + 1, ans + ")", currDepth - 1, maxDepth);
}

void solve() {
    cin >> n >> k;
    addBracket(1, 0, "(", 1, 0);
    for(string s: balanced) cout << s << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}