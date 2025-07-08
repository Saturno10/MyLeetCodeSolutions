class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorsCount = 0;
        int tensPosition = 11;
        int unitsPosition = 12;
        for (string senior: details){
            if(senior[tensPosition] > 54 || (senior[tensPosition] == 54 && senior[unitsPosition] > 48) ){
                seniorsCount++;
            }
        }
        return seniorsCount;
        
    }
};
