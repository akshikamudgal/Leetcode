class Solution {
public:
    bool isNumber(string s) {
        // The values that store the "rules" of the section that they are in
        bool foundDigit = false; // Makes sure there is a digit
        bool foundPeriod = false; // records if a period has been seen
        bool foundE = false; // records if an e has been seen
        bool checkSign = true; // records if the next char needs to be checked for a sign
        
        
        for (char c : s) {
            // Checks the sign once, then turns itself off (until e turns it back on)
            if (checkSign and (c == '-' or c == '+')) {
                checkSign = false;
                continue;
            }
            checkSign = false;
            
            // Checks for period, which is only valid if there has been no . before as well as not after the e
            if (c == '.') {
                if (not foundE and not foundPeriod) 
                    foundPeriod = true;
                else
                    return false;
                
                continue;
            }
            
            // Checks for an e, which needs a digit after (so turns off digit found) and may have a sign (so turn on sign check)
            if (c == 'e' or c == 'E') {
                if (not foundE and foundDigit)
                    foundE = true;
                else
                    return false;
                checkSign = true;
                foundDigit = false;
                continue;
            }
            // Checks if it is a number, and records that a number exists
            if (c - '0' >= 0 and c - '0' <= 9) {
                foundDigit = true;
                continue;
            }
            
            // If it does not match, then it means that it is some letter
            return false;
        }
        
        // Needs at least one digit
        return foundDigit;
    }
};