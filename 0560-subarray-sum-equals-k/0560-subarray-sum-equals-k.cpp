class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixMap;
        
        prefixMap[0] = 1; 
        
        int preSum = 0;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];

            int remove =preSum-k;
            count += prefixMap[remove];
            
            
            prefixMap[preSum]++;
        }
        
        return count;
    }
};