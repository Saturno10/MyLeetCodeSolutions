class Solution {
public:
    int minAddToMakeValid(string s) {
        int solution = 0;
        int opens = 0;
        int closes = 0;

        for (int i = 0; i < s.length(); i++){
            if (s[i] == '('){
                opens++;
            } else{
                if(opens){
                    opens--;
                } else{
                    solution++;
                }
                
            }
        }
        solution+=opens;
        return solution;
    }
};