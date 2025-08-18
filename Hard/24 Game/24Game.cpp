class Solution {
    const double MARGIN = 1e-6;
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> doubleCards(cards.begin(), cards.end());
        return backtracking(doubleCards);

    }

    bool backtracking(vector<double>& cards){
        if (cards.size() == 1) {
            return fabs(cards[0] - 24.0) < MARGIN;
        }

        for (int i = 0; i < cards.size(); i++){
            for (int j = 0; j < cards.size(); j++){
                if (i != j){
                    vector<double> next;
                    for (int k = 0; k < cards.size(); k++) {
                        if (k != i && k != j) next.push_back(cards[k]);
                    }

                    for (double val : operate(cards[i], cards[j])) {
                        next.push_back(val);
                        if (backtracking(next)) return true;
                        next.pop_back();
                    }
                }

            }
        }

        return false;
    }

    vector<double> operate(double a, double b) {
        vector<double> res;
        res.push_back(a + b);
        res.push_back(a - b);
        res.push_back(b - a);
        res.push_back(a * b);
        res.push_back(a / b);
        res.push_back(b / a);
        return res;
    }
};
