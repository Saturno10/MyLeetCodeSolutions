class Solution {
public:
    string removeDuplicates(string s){
    int n = s.length();
    if(n<=1) return s;
    string solution;
    solution = s[0];
    int endSolution = 0;
    for (int i = 1; i < n; ++i) {
        if (solution.empty()){
            solution +=s[i];
            endSolution= 0;
        }else{
            if(solution[endSolution] != s[i]){
                endSolution++;
                solution +=  s[i];
            }else{
                if (endSolution) endSolution--;
                solution.pop_back();
            }
        }


    }
    return solution;

}

};
