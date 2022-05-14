class Solution {
public:
    string multiply(string num1, string num2) {
     if(num1 == "0" || num2 == "0")
            return "0";
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        vector<int> result(num1.length() + num2.length(), 0);
        
        for(int i = 0; i < num1.length(); i++){
            int n1 = num1[i] - '0';
            
            for(int j = 0; j < num2.length(); j++){
                int n2 = num2[j] - '0';
                int zeros = i + j;
                
                int prod = n1 * n2;
                int total = prod + result[zeros];
                
                int digit = total % 10;
                int carry = total / 10;
                
                result[zeros] = digit;
                result[zeros + 1] += carry;
            }
        }
        
        if(result[result.size()-1] == 0)
            result.pop_back();
        
        string s = "";
        for(int i = result.size()-1; i >= 0; i--)
            s += to_string(result[i]);
        
        return s;
    }
};