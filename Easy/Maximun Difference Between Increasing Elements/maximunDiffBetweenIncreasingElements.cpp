class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minValue = nums[0];
        int diff = -1;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] > minValue){
                diff = max(diff, nums[i] - minValue);
            } else{
                minValue = nums[i];
            }
        }

        return diff;
    }
};
