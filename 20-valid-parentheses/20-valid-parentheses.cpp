class Solution {
public:
    bool isValid(string s) {
        stack<char> sy;
        for(char ch: s){
            if(sy.empty() || ch == '(' || ch == '{' || ch == '[')
                sy.push(ch);
            else if((sy.top() == '(' && ch == ')') || (sy.top() == '{' && ch == '}') || (sy.top() == '[' && ch == ']'))
                sy.pop();
            else
                return false;
        }
        if(sy.empty())
            return true;
        else
            return false;
    }
};