class Solution {
public:
    int maximumSwap(int num) {
        string numStr = to_string(num);
        int maxPos = 0;
        int maxVal = numStr[0];
        bool found = false;
        int numChange = 0;
        
        while(!found && numChange < numStr.length()){

            for (int i = numChange; i < numStr.length(); i++){
                if (numStr[i] >= maxVal){

                    if (numStr[i] > maxVal) found = true;
                    maxPos = i;
                    maxVal = numStr[i];
                }
                
            }
            if(!found){
                numChange++;
                maxPos = numChange;
                maxVal = numStr[maxPos];
            }
            
        }

        if(!found) return num;
       
        char swap = numStr[numChange];
        numStr[numChange] = numStr[maxPos];
        numStr[maxPos] = swap;

        int solution = stoi(numStr);
        
        

        return solution;
    }
};