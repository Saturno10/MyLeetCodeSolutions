class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if (*it == val) {
                nums.erase(it);
                it--;
                size--;
            }
        }
        return size;
    }
};
