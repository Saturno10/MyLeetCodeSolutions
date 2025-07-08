class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int previous = -101;
        vector<int>::iterator it = nums.begin();
        while(it != nums.end()){
            if (*it == previous){
                nums.erase(it);
            }else{
                k++;
                previous= *it;
                it++;
            }
        }
        return k;
    }
};
