class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int curr = 0;
        int n = nums.size();
        int sum = (n*(n+1))/2; //using ap formula
        
        for(int i=0;i<n;i++)
        {
            curr += nums[i];
        }
        return sum-curr;
    }
};