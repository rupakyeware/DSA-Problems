#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string a;
        cin >> a;
        a.erase(a.begin() + a.size()-1);
        a[a.size()-1] = 'i';
        cout << a << '\n';
    }

    return 0;
}