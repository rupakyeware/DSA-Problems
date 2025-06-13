#include "../stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

int test(int i, int &num) {
    return (num >> i) & 1;
}

void set_flag(int i, int &num) {
    num = num | (1LL << i);
}

void clear(int i, int &num) {
    num = num & ~(1LL << i);
}

void flip(int i, int &num) {
    num = num ^ (1LL << i);
}

int all(int &num) {
    return __builtin_popcountll(num) == 60;
}

int any_flag(int &num) {
    return num > 0;
}

int none(int &num) {
    return num == 0;
}

int count_1s(int num) {
    int count = 0;
    while(num) {
        count++;
        num = num & (num - 1);
    }
    return count;
}

void solve() {
    int q; cin >> q;
    int num = 0;
    while(q--) {
        int func; cin >> func;
        int i;
        switch(func) {
            case 1:
            cin >> i;
            cout << test(i, num) << endl;
            break;

            case 2:
            cin >> i;
            set_flag(i, num);
            break;

            case 3:
            cin >> i;
            clear(i, num);
            break;

            case 4:
            cin >> i;
            flip(i, num);
            break;

            case 5:
            cout << all(num) << endl;
            break;

            case 6:
            cout << any_flag(num) << endl;
            break;

            case 7:
            cout << none(num) << endl;
            break;

            case 8:
            cout << count_1s(num) << endl;
            break;

            case 9:
            cout << num << endl;
            break;

            default:
            break;
        }
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