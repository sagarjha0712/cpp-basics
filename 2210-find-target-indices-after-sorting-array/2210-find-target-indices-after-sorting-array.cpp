class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int lesscount=0;
        int count=0;
        vector<int>indx;

        for (int i=0;i<nums.size();i++) {
            if (nums[i]==target) {
                count++;
            }else if (nums[i]<target) {
                lesscount++;
            }


        }
        int temp=count;

        for (int i=1;i<=count;i++) {
            indx.push_back(lesscount+i-1);

        }
        return indx;
    }
};