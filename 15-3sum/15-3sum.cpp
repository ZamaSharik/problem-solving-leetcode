class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int length = nums.size();
        int start;
        int end;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<length;i++) {
            if((i>0)&&(nums[i]==nums[i-1])) {
                continue;
            }
            start=i+1;
            end=length-1;
            while(start<end) {
                int sum = nums[start]+nums[end]+nums[i];
                if(sum < 0) {
                    start++;
                }
                else if(sum > 0) {
                    end--;
                }
                else {
                    res.push_back(vector<int>{nums[i],nums[start],nums[end]});
                    while ((start<end) && (nums[start]==nums[start+1])) {
                        start++;
                    }
                    while((start<end)&&(nums[end]==nums[end-1])) {
                        end--;
                    }
                    start++;
                    end--;
                }
            }
        }
        return res;
    }
};











  
  