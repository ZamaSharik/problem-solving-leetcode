// problem link: https://leetcode.com/problems/xor-queries-of-a-subarray/

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector <int> prefix;
        vector <int> v;
        prefix.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            prefix.push_back(prefix[i-1] ^ arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            cout<<prefix[i]<<" ";
        }
        for(int i=0;i<queries.size();i++) {
            int left = queries[i][0];
            int right  = queries[i][1];
            if (left == 0) {
                v.push_back(prefix[right]);
            }
            else {
                v.push_back(prefix[right] ^ prefix[left-1]);
            }
           
        }
        return v;
    }
};
