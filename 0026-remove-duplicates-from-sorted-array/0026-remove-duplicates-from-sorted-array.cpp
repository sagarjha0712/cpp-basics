class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> unique;
        for (int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }

        for (auto num : mpp) {
            unique.push_back(num.first);
        }

        for (int i=0; i<unique.size();i++) {
            nums[i]=unique[i];
        }

        return unique.size();
    }
};