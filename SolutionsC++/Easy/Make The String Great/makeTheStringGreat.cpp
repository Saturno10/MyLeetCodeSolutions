class Solution {
public:
    string makeGood(string s) {
        string solution = s;
        for(int i = 0; i < solution.length(); i++){
                if(solution[i]-32 == solution[i+1] || solution[i]+32 == solution[i+1]){
                    solution.erase(i,2);
                    return makeGood(solution);
                }
        }
        return solution;
    }
};
