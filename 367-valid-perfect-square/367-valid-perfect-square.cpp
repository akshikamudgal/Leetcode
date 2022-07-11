class Solution {
public:
    bool isPerfectSquare(int num) {
        int n= sqrt(num);
        int s=n*n;
        if(s==num)
        {
            return true;
        }
        return false;
    }
};