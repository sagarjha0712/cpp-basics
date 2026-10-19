class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>indx;

        for (int i=0;i<nums.size();i++) {
            if (nums[i]==target) {
                indx.push_back(i);
            }
        }
        return indx;
    }
};