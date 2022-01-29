class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        int noOfIndexTriplets=0;
        int n = nums.size();
        if(n<3) {
            return noOfIndexTriplets;
        }
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int start = i+1;
            int end = n-1;
            while(start < end) {
                int sum = nums[i]+nums[start]+nums[end];
                if (sum >= target) {
                    end--;
                }
                else {
                    noOfIndexTriplets=noOfIndexTriplets+end-start;
                    start++;
                }
            }
        }
        return noOfIndexTriplets;
    }
};

// [-2,0,1,3]
//   i s   e
//   
//  