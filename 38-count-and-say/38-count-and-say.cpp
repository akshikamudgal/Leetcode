class Solution {
public:
    string countAndSay(int n) {
     /* string s = "1";
      n--;
      while(n--) {
        char ch = s[0];
        int cnt = 1;
        string t = "";
        for(int i = 1; i < s.size(); i++) {
          if(s[i] == ch) {
            cnt++;
          }else {
            t += ('0' + cnt);
            t += ch;
            ch = s[i];
            cnt = 1;
          }
        }
        t += ('0' + cnt);
        t += ch;
        s = t;
      }
      
      return s;*/
        string prev = "1";
        for(int i = 2; i <= n; i++){
            int l = 0;
            int r = 0;
            string tmp;
            while(r < prev.size()){
                while(r < prev.size() && prev[l] == prev[r]){
                    r++;
                }
                tmp += to_string(r - l) + prev[l];
                l = r;
            }
            prev = tmp;
        }
        return prev;
    }
};