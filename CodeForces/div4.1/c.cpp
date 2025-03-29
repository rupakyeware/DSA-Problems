#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int t = 0;
        t = m >= a ? t += a : t += m; // first row only
        t = m >= b ? t += b : t += m; // second row only
        if(t < m*2 && c <= m*2 - t) {
            t += c;
        } else t = m*2;
        cout << t << endl;
    }
}