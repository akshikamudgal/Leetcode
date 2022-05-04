class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int newLength = 0;
    int count = 0;
    
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == val){
            count++;
        }
    }
    
    newLength = nums.size() - count;
    
    int j = 0;
    while(count != 0){
        if(nums[j] == val){
            nums.erase(nums.begin()+j);
            count--;
            j--;
        }
        
        j++;
    }
    
    return newLength;
}
};