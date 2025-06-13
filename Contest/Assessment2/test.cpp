#include "stdc++.h"
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    vector<int> v(3);
    v[0] = 1, v[1] = 2, v[2] = 3;
    v.resize(5);
    for (int i = 0; i < 3; i++)
        cout << v[i] << " ";
}

signed main()
{
    int arr[5] = {3, 1, 4, 5, 2};
    sort(arr, arr+4);

    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
}