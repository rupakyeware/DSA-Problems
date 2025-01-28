class Solution {
public:
    vector<int> mirror(vector<int>subv) {
        int i = 0;
        int j = subv.size()-1;

        while(i < j) {
            int temp = subv[i];
            subv[i] = subv[j];
            subv[j] = temp;
            i++;
            j--;
        }

        return subv;
    }
    void rotate(vector<int>& nums, int k) {
        int start, end;
        k = k % nums.size();

        // mirror first half
        start = 0;
        end = nums.size()-k;
        vector<int> sliced_left(nums.begin()+start, nums.begin()+end);
        vector<int> mirrored_left = mirror(sliced_left);

        // mirror second half
        start = nums.size()-k;
        end = nums.size();
        vector<int> sliced_right(nums.begin()+start, nums.begin()+end);
        vector<int> mirrored_right = mirror(sliced_right);

        // mirror entire vector
        mirrored_left.insert(mirrored_left.end(),mirrored_right.begin(),mirrored_right.end());
        vector<int> final_mirror = mirror(mirrored_left);
        nums = final_mirror;
    }
};
