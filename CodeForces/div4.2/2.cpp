#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arrn;
        vector<int> arrm;

        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            arrn.push_back(a);
        }

        for(int i = 0; i < m; i++) {
            int a;
            cin >> a;
            arrm.push_back(a);
        }
        vector<pair<int, int>> options(n);
        for(int i = 0; i < n; i++) {
            int og = arrn[i];
            int edited = arrm[0] - arrn[i];
            options[i] = {min(og, edited), max(og, edited)};
        }

        bool possible = true;
        int prev = -100000000;

        for(int i = 0; i < n; i++) {
            if(options[i].first >= prev) {
                prev = options[i].first;
            }
            else if (options[i].second >= prev) {
                prev = options[i].second;
            } 
            else {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}