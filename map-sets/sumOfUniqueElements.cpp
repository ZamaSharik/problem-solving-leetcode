//problem-link: https://leetcode.com/problems/sum-of-unique-elements
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
