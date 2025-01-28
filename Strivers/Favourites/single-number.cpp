class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int n: nums) {
            xorr = xorr ^ n;
        }

        return xorr;
    }
};
