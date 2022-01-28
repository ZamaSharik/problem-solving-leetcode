class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int start,end;
        int diff=INT_MAX;
        
        // we will track the smallest absolute difference between the sum and the           // target.
        
        // If the absolute difference between sum and target is smaller than the 
        // absolute value of minimum difference diff. Set diff to target - sum
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && diff != 0;i++) {
            start = i+1;
            end = nums.size()-1;
            while (start < end) {
              int sum = nums[i]+nums[start]+nums[end];
                if (abs(target-sum) < abs(diff)) {
                    diff=target-sum;
                }
                if (sum < target) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
        return target-diff;
    }
};

// [-4,-1,1,2]
// (2-5 = -3) cs=-3
// (3-4=-1) cs=-1