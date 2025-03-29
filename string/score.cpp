#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, score = 0; 
    cin >> n;
    string s; 
    cin >> s;

    int curr = 0;

    while(curr < s.length()) {
        switch(s[curr]) {
            case 'V':
                score += 5;
                curr++;
                break;

            case 'W':
                score += 2;
                curr++;
                break;

            case 'X':
                if(curr + 1 < s.length()) {
                    s.erase(curr + 1, 1);
                }
                curr++;
                break;

            case 'Y':
                if(curr + 1 < s.length()) {
                    char temp = s[curr + 1];
                    s.erase(curr + 1, 1);
                    s.push_back(temp);
                }
                curr++;
                break;

            case 'Z':
                if(curr + 1 < s.length()) {
                    if(s[curr + 1] == 'V') {
                        score /= 5;
                        s.erase(curr + 1, 1);
                    } else if(s[curr + 1] == 'W') {
                        score /= 2;
                        s.erase(curr + 1, 1);
                    }
                }
                curr++;
                break;
        }
    }
    cout << score << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;

    while(_t--) solve();
    return 0;
}