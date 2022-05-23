class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>x;
        for (char i:s)
        {
            x[i]++;
        }
        for (char i:t)
        {
            x[i]--;
            if(x[i]<0 || s.size()!=t.size())
                return false;
        }
        return true;
    }
};
