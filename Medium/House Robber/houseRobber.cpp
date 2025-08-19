class Solution {
public:
    vector<int> bestValue;
    int rob(vector<int>& nums) {
        if (nums.size() < 2) return nums[0];
        bestValue = vector<int>(nums.size(), -1);
        bestValue[0] = nums[0];
        bestValue[1] = max(nums[0], nums[1]);
        return dynamicRobbing(nums, nums.size()-1);

    }

    int dynamicRobbing(vector<int>& nums, int index){
        if(bestValue[index] == -1) bestValue[index] = max(dynamicRobbing(nums, index - 1), dynamicRobbing(nums, index -2) + nums[index]);
        return bestValue[index];
    }


};
