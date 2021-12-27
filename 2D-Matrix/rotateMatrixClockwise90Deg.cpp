// Problem Link: https://leetcode.com/problems/rotate-image/
// idea: transpose and reverse
void rotate(vector<vector<int>>& matrix) {
        // idea: Transpose the matrix and then reverse each row
       int n = matrix[0].size();
        // transpose step
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // reverse each row
        for(int i=0; i<n; i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }


// when an array is given
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin >>n;
        long long arr[n][n];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin>>arr[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(arr[i][j],arr[j][i]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = n-1; j >= 0; j--) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
