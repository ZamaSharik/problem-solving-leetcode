//problem link: https://leetcode.com/problems/4sum-ii/
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        int n=nums1.size();
        int sum=0;
        map <int,int> mp;
       
        // first 2 sum and store in hashmap
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) {
                sum = nums1[i]+nums2[j];
                mp[sum]++;
            }
        }
        // next two sum and check in the previous hashmap with opposite sign
        for(int j=0;j<n;j++) {
            for(int k=0; k<n; k++) {
                
                sum = nums3[j]+nums4[k];
                sum = sum * -1;
             
                if (mp.find(sum) != mp.end()){
                    count=count+mp[sum];
                }  
            }
        }
        return count;
    }
};
