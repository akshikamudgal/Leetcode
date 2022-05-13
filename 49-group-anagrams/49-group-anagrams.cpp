class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        map<string,vector<string>>mp;
        
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            res.push_back(itr->second);
        }
        return res;
        
    }
};