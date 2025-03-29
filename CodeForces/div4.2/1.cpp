#include <iostream>
#include <string>
using namespace std;

int solve(string s) {
    bool changed = true;
    while(changed) {
        changed = false;
        for(int i = 0; i < s.length()-1; i++) {
            if(s[i] == s[i+1]) {
                s[i] = s[i-1];  
                s.erase(i+1, 1); 
                changed = true;
                break;
            }
        }
    }
    return s.length();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }
    return 0;
}