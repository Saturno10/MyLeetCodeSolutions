class Solution {
public:
    bool checkValidString(string s) {
        vector<int> aperturas;
        vector<int> comodines;
        for(int i = 0; i < s.length(); i++){
            switch (s[i]){
                case '(':
                    aperturas.push_back(i);
                    break;
                case ')':
                    if(!aperturas.empty()){
                        aperturas.pop_back();
                    }else if(!comodines.empty()){
                        comodines.pop_back();
                    }else{
                        return false;
                    }
                    break;
                case '*':
                    comodines.push_back(i);
                    break;
                default:
                    break;
            }
            
        }
        
        if (aperturas.size()>comodines.size()) return false;
        bool compensado;
        int pivote = 0;
        for (int i = 0; i < aperturas.size(); ++i) {
            compensado = false;
            for (int j = pivote; j < comodines.size(); ++j) {
                if(aperturas[i] < comodines[j]){
                    compensado = true;
                    pivote = j+1;
                    break;
                }
            }
            if(!compensado){
                return false;
            }
            
        }
        return true;
    }
};
