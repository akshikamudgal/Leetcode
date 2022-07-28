
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        // sorted vecotor
        sort(intervals.begin(),intervals.end()); 
        
        
        // two variable store starting end ending positions
        int s = intervals[0][0],e = intervals[0][1]; 
    
    
        for(int i=0; i<intervals.size(); i++)
        {
            vector<int> temp; 
            
            // check if intervals merge or not
            if(e>=intervals[i][0] && s<=intervals[i][1])
            {
                
                s = min(s,intervals[i][0]); 
                e = max(e,intervals[i][1]); 
            } 
            else 
            {
                
                temp.push_back(s); 
                temp.push_back(e); 
                s = intervals[i][0]; 
                e = intervals[i][1]; 
                ans.push_back(temp); 
            }
        }
    
        // for the last array 
        vector<int> temp; 
        temp.push_back(s); 
        temp.push_back(e); 
        ans.push_back(temp); 
        return ans;
        
    }
};