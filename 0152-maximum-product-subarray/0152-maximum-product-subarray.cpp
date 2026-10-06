class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        long long maxP=nums[0];

        for (int i=0;i<n;i++) {
            long long product=nums[i];
            maxP=max(maxP,product);
            for (int j=i+1;j<n;j++) {
                product*=nums[j];
                maxP=max(maxP,product);
            }

        }

        return (int)maxP;
    }
};