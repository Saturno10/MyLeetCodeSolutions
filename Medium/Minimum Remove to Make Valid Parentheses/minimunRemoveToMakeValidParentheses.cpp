class Solution {
public:
    string minRemoveToMakeValid(string s){
        string solution = s;
        vector<int> aperturasDisponibles;
        for (int i = 0; i < s.length(); ++i) {
            switch (solution[i]) {
                case '(':
                    aperturasDisponibles.push_back(i);
                    break;
                case ')':
                    if (!aperturasDisponibles.empty()) {
                        aperturasDisponibles.pop_back();
                    } else {
                        solution.erase(i, 1);
                        i--;
                    }
                    break;
                default:
                    break;
            }
        }
        int desp = 0;
        for(int aperturaSobrante : aperturasDisponibles){
            solution.erase(aperturaSobrante-desp, 1);
            ++desp;

        }

        return solution;
    }

};
