class Solution {
public:
    bool isHappy(int n) {
    
    if(n==1||n==7)
	return true;
        
    if(n/10==0)
    return false;
        
    int s=0;
	
    while(n>0)
    {
        s+=pow(n%10,2);
        n=n/10;
    }
    return isHappy(s);
    }
};