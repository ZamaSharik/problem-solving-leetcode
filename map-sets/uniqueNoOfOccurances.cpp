//problem link: https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int n=nums.size();
        bool ans=false;
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        set <int> s;
        for(pair<int,int> p: mp) {
            s.insert(p.second);
        }
        return s.size()==mp.size();
    }
};
