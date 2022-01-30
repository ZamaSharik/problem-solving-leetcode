class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long left=0;
        long long right=0;
        long long n=nums.size();
        long long ans=0;
        long long product=1;
        for(;right<n;right++) {
            product = product * nums[right];
            for(;left<=right && product >= k; left++) {
                product = product/nums[left];
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};