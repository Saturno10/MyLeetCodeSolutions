#pragma GCC optimize("O3", "mtune=native", "march=native")
class Solution {
public:
    int minSwaps(string s) {
        int solution = 0;
        int lp = 0;
        int rp = s.length()-1;
        int openings = 0;
        int closings = 0;
        while(rp > lp){
            switch(s[lp]){
                case '[':
                    openings++;
                    break;
                case ']':
                    closings++;
                    break;
                default:
                    break;
            }
            if(openings < closings){
                while(s[rp] != '[') rp--;
                solution++;
                s[rp] = ']';
                s[lp] = '[';
                openings++;

            }else{
                lp++;
            }

            

        }

        return solution;
    }
};