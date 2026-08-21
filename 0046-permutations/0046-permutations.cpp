class Solution {
private:
    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds, vector<bool>& freq) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds); 
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            
            if (!freq[i]) {
                
                ds.push_back(nums[i]);
                freq[i] = true;

                backtrack(nums, ans, ds, freq);

                ds.pop_back();
                freq[i] = false;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        vector<bool> freq(nums.size(), false); 
        
        backtrack(nums, ans, ds, freq);
        
        return ans;
    }
};