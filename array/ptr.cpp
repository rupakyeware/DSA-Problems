#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    int arr[] = {0, 2, 5, 7, 9};
    int *ptr = arr;
    cout << arr << endl;
    while (ptr + i <= arr + 4)
    {
        cout << *(ptr + i) << " ";
        ptr++;
        i++;
    }
    return 0;
}