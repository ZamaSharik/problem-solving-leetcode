// problem link: https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        
        vector <int> prefix;
        vector <int> suffix(n);
        
        suffix[n-1] = nums[n-1];
        prefix.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++) {
            prefix.push_back(prefix[i-1]+nums[i]);
        }
        
        for(int j=n-2;j>=0;j--) {
            suffix[j]=(suffix[j+1]+nums[j]);
        }
        
        for(int i=0;i<n;i++){
            if(prefix[i]==suffix[i]){
                return i;
            }
        }
        return -1;
        
       // [1,7,3,6,5,6]
       // [1,8,11,17,22,28]
       // [29,28,20,17,11,6]
        
        //[1,2,3]
        //[1,3,6]
        //[6,5,3]
        
        //[1,1,1]
        //[1,2,3]
        //[3,2,1]
        
        // [10,2,3,6,15,0]
        // [10,12,15,21,36,36]
        // [36,26,24,21,15,0]
        
        // [2,1,-1]
        // [2,3,2]
        // [2,0,-1]
      
        //prefix[i]==suffix[]
        

    }
};
