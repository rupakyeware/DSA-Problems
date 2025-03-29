#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string a;
        cin >> a;
        for(int i = 0; i < a.size();i++) {
            switch(a[i]) {
                case 'p': a[i] = 'q'; break;
                case 'q': a[i] = 'p'; break;
                default: 'w';
            }
        }
        reverse(a.begin(), a.end());
        cout << a << endl;
    }
}