#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void reverse_word(string &word) {
    reverse(word.begin(), word.end());
}

void solve() {
   string s;
   getline(cin, s);
   stringstream ss(s);
   vector<string> words;
   string word;
   while(ss >> word) words.push_back(word);
   for(auto s: words) {
    reverse_word(s);
    cout << s << ' ';  
   } 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}