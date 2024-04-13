class Solution {
public:
    

    int searchInsert(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size();
        if(target > nums[right-1]) return right;
        while(left <= right){
            int pivot = (left+right)/2;
            if(target == nums[pivot]){
                return pivot;
            }else if (target < nums[pivot]){
                right = pivot-1;
            }else{
                left = pivot +1;
            }
        }
        return left;
    }
};
