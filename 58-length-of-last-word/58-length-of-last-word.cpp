class Solution {
public:
    int lengthOfLastWord(string s) {
        //started from the last of the string
        int i= s.length()-1;
        int count=0;
        while(s[i]==' ') 
        i--; 
        while(i>=0 && s[i]!=' '){
            count++, i--;
        }
        return count;
    }
};