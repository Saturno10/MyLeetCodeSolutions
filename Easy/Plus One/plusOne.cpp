class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int llevada = 1;
        int iterador = digits.size()-1;
        while(llevada && iterador >= 0){
            digits[iterador]+=llevada;
            if(digits[iterador] == 10){
                digits[iterador] = 0;
                
            }else{
                llevada--;
            }
            iterador--;

        }
        if(llevada){
            digits.insert(digits.begin(),llevada);
        }
        return digits;
    }
};
