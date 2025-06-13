#include "/Users/rupakyeware/Desktop/DSA-Problems/stdc++.h"
#define endl '\n'
using namespace std;

vector<string> balanced;
int n;

void addBracket(int open, int close, string ans) {
    if(close > open || open > n/2) {
        return;
    }
    if(ans.size() == n) {
        balanced.push_back(ans);
        return;
    }

    addBracket(open + 1, close, ans + "(");    
    addBracket(open, close + 1, ans + ")");    
}

void solve() {
    cin >> n;
    addBracket(1, 0, "(");

    for(string s: balanced) cout << s << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}