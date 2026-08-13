class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int> temp(n,0);
        int k=0, j=1;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]>0) {
               temp[k]=nums[i];
               k+=2;
            }
            else{
                temp[j]=nums[i];
                j+=2;
            }
        }

        return temp;
    }
};