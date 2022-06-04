class Solution {
public:
    bool digitCount(string num) {
       map<char, int> mp;
        for(int i = 0; i < num.size(); i++){
            // store the digit occurrence
            mp[num[i] - '0']++;
        }
        for(int i = 0; i < num.size(); i++){
            // check the condition
            if(mp[i] != (num[i] - '0')) return false;
        }
        return true;
    }
};