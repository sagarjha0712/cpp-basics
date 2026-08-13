class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> temp(nums.size());
        int k=0, j=nums.size()/2;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]<0) {
               temp[j]=nums[i];
               j++;
            }
            else{
                temp[k]=nums[i];
                k++;
            }
        }

        vector<int> array;
        int l=0,m=nums.size()/2;
        for (int i=0;i<nums.size()/2;i++) {
            array.push_back(temp[l]);
            array.push_back(temp[m]);
            l++;
            m++;
        }

        return array;
    }
};