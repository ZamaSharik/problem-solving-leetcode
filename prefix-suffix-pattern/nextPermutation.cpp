// problem link: https://leetcode.com/problems/next-permutation/

// Find next permutation:
// Algorithm:
// step 1: Linearly traverse given array from the end and find a number that is greater than its adjacent nums[i] > nums[i-1]. Store the index of smaller number in breakPoint variable. If there is no such element, reverse entire array and return.

// step 2: Linearly traverse from the end and this time find a number larger than nums[breakPoint]. Let's call it nums[i].

// step 3: Swap nums[i] and nums[breakPoint].

// step 4: Reverse the array from index breakPoint + 1 to nums.size().

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1;
        int n = nums.size();
        for (int i=n-1; i>0; i--) {
            if(nums[i] > nums[i-1]) {
                breakPoint = i-1;
                break;
            }
        }
        if(breakPoint == -1) {
            reverse(nums.begin(),nums.end());
            return;
        }
        
            for(int j=n-1; j>=0;j--) {
                if(nums[j] > nums[breakPoint]) {
                    swap(nums[breakPoint],nums[j]);
                    reverse(nums.begin()+breakPoint+1,nums.end());
                    break;
                }
            }
        
    }
};
