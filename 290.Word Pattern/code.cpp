class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> m;
        vector<bool> used(200, false);
        
        stringstream ss(s);
        string word;    //current word in the string
        
        int i=0;        //current letter in the pattern. 
        while(getline(ss, word, ' '))
        {
            char letter = pattern[i];
            if(m.count(word) > 0)
            {
                if (m[word] != letter)
                    return false;
            }
            
            else if (used[letter])
                return false;
            else
            {
                m[word] = pattern[i];
                used[(int)letter] = true;
            }
            
            i++;
        }
        
        return i >= pattern.length();
    }
};
