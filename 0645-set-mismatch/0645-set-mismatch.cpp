class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>duplicate;
        vector<int> a;
        
        for (int i=0;i<nums.size();i++) {
            duplicate[nums[i]]++;
        }
        
        for (auto it:duplicate) {
            if (it.second>1) {
                a.push_back(it.first);
            }
        }
        
        int xor1=0,xor2=0;
        
        for (int i=0;i<nums.size();i++) {
            xor1^=i+1;
            xor2^=nums[i];
        }
        int XOR=xor1^xor2^a[0];
        a.push_back(XOR);
        
        return a;
    }
};