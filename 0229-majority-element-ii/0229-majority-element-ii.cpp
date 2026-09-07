class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>major;

        for (int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }

        for (auto it :mpp) {
            if (it.second>nums.size()/3) {
                major.push_back(it.first);
            }
        }

        return major;
    }
};