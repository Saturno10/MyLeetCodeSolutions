class Solution {
public:
    int mySqrt(int x) {
        int solution = 0;
        int currentOdd = 1;
        while(x > 0){
            x-=currentOdd;
            solution++;
            currentOdd +=2;
        }
        if(!x) return solution;
        return --solution;
    }
};
