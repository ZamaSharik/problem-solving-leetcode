//problem link: https://leetcode.com/problems/diagonal-traverse/
// Idea: The diagonals have a particular property: All elements of a particular diagonal have the same i+j value where:
// i ->  row number
// j ->  column number

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
       int m = mat.size();
        int n = mat[0].size();
        vector<vector <int>> arr(m+n-1); //creating new matrix to store the diagonal elements
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(int i=0;i<m+n-1;i++){
            if(i%2 != 0){ // determining answer order based on odd and even indices
                ans.insert(ans.end(),arr[i].begin(),arr[i].end()); 
            }
            else {
                ans.insert(ans.end(),arr[i].rbegin(),arr[i].rend());
            }
        }
        return ans;
    }
};
