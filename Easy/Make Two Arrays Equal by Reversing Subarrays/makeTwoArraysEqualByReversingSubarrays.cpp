class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> targetMap;
        unordered_map<int, int> arrMap;
        for(int i = 0; i < target.size(); i++){
            targetMap[target[i]]++;
            arrMap[arr[i]]++;
        }

        return targetMap == arrMap;
    }
};
