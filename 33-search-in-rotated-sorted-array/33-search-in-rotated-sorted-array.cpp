class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int out=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
              out=i;
            }
        }
        return out;
    }
};