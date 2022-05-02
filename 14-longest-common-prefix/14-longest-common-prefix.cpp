class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       //pos keeps track of the end of the common prefix, starts at 0 since its a prefix
		for(int pos = 0; pos < strs[0].length(); ++pos)
            //iterates over the length of the first word
			for(int i = 1; i < strs.size(); ++i) 
                //for all of the strings in the vector
				//compare each char of the first string to the char at the same pos in each string
				//if we reach the end of any string or a pos where the chars do not match, we have the largest prefix
				if(pos == strs[i].length() || strs[i][pos] != strs[0][pos])
					return strs[0].substr(0, pos);
		return strs[0];
	}
};