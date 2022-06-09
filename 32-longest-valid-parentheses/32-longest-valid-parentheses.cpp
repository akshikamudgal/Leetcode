class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>ind;
        stack<char>st;
        ind.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(!st.empty()&&st.top()=='('){
                    st.pop();
                    ind.pop();
                    ans=max(ans,i-ind.top());
                }else {
                    st.push(')');
                    ind.push(i);
                }
            }else {
                    st.push('(');
                    ind.push(i);
            }
        }
        return ans;
    }
};