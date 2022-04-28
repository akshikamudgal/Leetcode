class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> hash;
    
    for (int i = 0;; ++i) {
        auto it = hash.find(target - nums[i]);
        
        if (it != hash.end()) 
            return vector<int> {i, it->second};
            
        hash[nums[i]] = i;
    }
  }
};