#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n, x, y; cin >> n >> x >> y;    
    
    int i = 0, j = 0;
    int jogged = 0;
    while(i < n && j < n) {
        cout << "new values!" << endl;
        cout << "i:" << i << ", j: " << j << endl; 
        int sum = i + j;
        if(sum % 2 == 0) {
            int ti = j, tj = 0;
            while(i < ti && j > 0) {
                cout << "jogged!" << endl;
                cout << "i:" << i << ", j: " << j << endl; 
                jogged++;
                i++;
                j--;
            } 
            i++;
        }
        else {
            int ti = 0, tj = i;
            while(i > ti && j < tj) {
                i--;
                j++;
            }
            j++;
        }

        cout << jogged << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t;
    cin >> _t;

    while(_t--) solve();
    return 0;
}