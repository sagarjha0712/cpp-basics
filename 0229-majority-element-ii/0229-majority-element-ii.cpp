class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 =0,el1;
        int count2=0,el2;
        vector<int> major;

        for (int i=0;i<nums.size();i++) {
            if (count1 ==0 && nums[i]!=el2) {
                count1+=1;
                el1=nums[i];
            }
            else if (count2 ==0 && nums[i]!=el1) {
                count2+=1;
                el2=nums[i];
            }
            else if (el1==nums[i]) {
                count1++;

            }
            else if (el2==nums[i]) {
                count2++;
            }else{
                count1--;
                count2--;
            }
        }

        int c1=0,c2=0;

        for (int i=0;i<nums.size();i++) {
            if (el1==nums[i]) {
                c1++;
            }else if (el2==nums[i]) {
                c2++;
            }
        }
        if (c1>nums.size()/3) {
            major.push_back(el1);
        }
        if (c2>nums.size()/3) {
            major.push_back(el2);
        }

        return major;
    }
};