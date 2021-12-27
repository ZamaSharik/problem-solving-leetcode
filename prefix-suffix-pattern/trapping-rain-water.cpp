// problem link: https://leetcode.com/problems/trapping-rain-water
class Solution {
public:
    int trap(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        vector<int>prefix; // prefix to get left boundary
        vector<int>suffix(n); // suffix array to get right boundary

        prefix.push_back(arr[0]);
        for (int i = 1; i < n; i++) {
            prefix.push_back(max(prefix[i-1], arr[i]));
        }
        suffix[n-1]=arr[n-1];
        
        for (int i = n-2; i >= 0; i--) {
            suffix[i]=(max(suffix[i+1],arr[i]));
        }
        for (int i = 0; i < n; i++) {
            sum+=min(prefix[i],suffix[i])-arr[i];   // min of prefix and suffix minus the current height of the block
        }
        return sum;
    }
};
