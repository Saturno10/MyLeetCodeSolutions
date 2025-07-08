class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int increments = 0;
        sort(nums.begin(),nums.end());
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                increments += nums[i-1]-nums[i]+1;
                nums[i] += nums[i-1]-nums[i]+1;
            }            
        }
        return increments;
    }
};
