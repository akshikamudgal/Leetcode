class Solution {
public:
    string countAndSay(int n) {
      string s = "1";
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
      
      return s;
    }
};