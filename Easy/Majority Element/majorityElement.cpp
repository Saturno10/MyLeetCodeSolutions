class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int length = nums.size();
        unordered_map<int,int> map; 
        for(auto number : nums){
            map[number]++;
        }
        for (auto [number, quantity] : map){
            if(quantity >= length/2+1) return number;
        }
        return 0;
    }
};
