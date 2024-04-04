class Solution {
public:
    int maxDepth(string s){
        int currentDepth = 0;
        int result = 0;
        for (char n : s){
            switch (n) {
                case '(':
                    currentDepth++;
                    if (currentDepth>result) result = currentDepth;
                    break;
                case ')':
                    currentDepth--;
                    break;
                default:
                    break;
            }
        }
        return result;
    }
};
