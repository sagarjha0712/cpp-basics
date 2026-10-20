class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,mid=n /2,r=n-1;

        while (l<=r) {
            if (target==nums[mid]) {
                return mid;
            }else if (nums[mid]>target) {
                r=mid-1;
            }else{
                l=mid+1;
            }

            mid=l+(r-l) /2;
        }

        return -1;
    }
};