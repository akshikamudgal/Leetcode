class Solution {
public:
    string addBinary(string a, string b) {
        int n= a.size()-1;
        int m= b.size()-1;
        int carry = 0;
        string ans = "";
        
        while(n>=0 || m>=0 || carry!=0)
        {
            int x =0,y=0;
            if(n < a.size() && a[n] == '1') 
                x=1;
            if(m < b.size() && b[m] == '1') 
                y=1;
            
            ans = to_string((x+y+carry)%2) + ans;
            carry = (x+y+carry)/2;
            n--;
            m--;
        }
        
        return ans;
    }
};