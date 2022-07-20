class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majorityElement = 0;
        
    for(int i=0;i<nums.size();i++) 
    {
      if(count == 0) 
      {
        majorityElement = nums[i];
        count++;
      }
      else if(majorityElement == nums[i]) 
      {
        count++;
      }
      else 
      {
        count--;
      }
    }
  return majorityElement;
    }
};