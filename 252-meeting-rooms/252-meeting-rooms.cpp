class Solution {
public:
    
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        // [[2,8],[7,10],[14, 16]]
        
        if(intervals.size()<=1) {
            return true;
        }
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
       
        // for(int i=0;i<intervals.size();i++) {
        //     for(int j=0;j<intervals[0].size();j++) {
        //         cout<<intervals[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
       // [[1,13],[13,15]]
       // [[1,13]]
        
        result.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++) {
            if(result[j][1]>intervals[i][0]) {
                return false;
            }
            else {
                j++;
                result.push_back(intervals[i]);
            }
        }
        
        return true;
        
    }
};