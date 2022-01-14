Initially sort the array and then push the first element into the answer for speculation.
We have two condition if the first elements second part of ans array is greater than or equal to the second element first part of the 
interval array.
The other condition we have to tackle is what if its not? then we push the particular element into the ans array which will be then be under speculation.
interval: [[1,3],[2,6],[8,10],[15,18]]
             i
We initally push the 1st element into the ans array:
ans=[[1,3]]
      j        j points to the latest pushed element
Then we i is incremented.
[[1,3],[2,6],[8,10],[15,18]]
         i
Now the ans[j][1]>interval[i][0] this means there is a possiblity of merging so we merger them
Remember the way we merge is to take the second element as max(ans[j][1],interval[i][1])
cuz imagine we have this
[1,7][2,4] --->merge should be ---->[1,7]

ans=[[1,6]]

then we move i forward

[[1,3],[2,6],[8,10],[15,18]]
               i
Since ans[j][1]<interval[i][0] thus not contributing to the merge.
Thus we will push this into the ans array and speculate.

ans=[[1,6][8,10]]
            j   <----j is moved forward
i is moved forward 
[[1,3],[2,6],[8,10],[15,18]]
                       i
Since ans[j][1]<interval[i][0] thus not contributing to the merge.
ans=[[1,6][8,10][15,18]]
                  j
Similar questions: 
252 Meeting Rooms
253 Meeting Rooms II
435 Non-overlapping Intervals 
