// problem link: https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);
        vector<int> prefixProd(n);
        vector<int> suffixProd(n);
        
        prefixProd[0]=1;
        suffixProd[n-1]=1;
        
        for(int i=1; i<n; i++) {
            prefixProd[i] = (prefixProd[i-1]*nums[i-1]);
        }
        
        for(int i=n-2; i>=0; i--) {
            suffixProd[i]=(suffixProd[i+1]*nums[i+1]);
        }
        
        for (int i=0;i<n;i++) {
            ans[i]=(prefixProd[i]*suffixProd[i]);
        }
        
        return ans;
    }
};