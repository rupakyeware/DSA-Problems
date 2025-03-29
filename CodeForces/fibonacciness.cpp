#include <iostream>
using namespace std;

int getFibonacciness(int nums[]) {
    int missing_right = nums[0] + nums[1];
    int missing_center = nums[3] - nums[1];
    int missing_left = nums[4] - nums[3];
    
    int count = 1;
    if(missing_right == missing_center) count++;
    if(missing_center == missing_left) count++;
    if(missing_right == missing_left) count++;
    if (count > 3) count = 3;

    return count;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int nums[5];
        cin >> nums[0] >> nums[1] >> nums[3] >> nums[4];
        cout << getFibonacciness(nums) << endl;
    }
}