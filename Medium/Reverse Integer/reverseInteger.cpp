class Solution {
public:

    int reverse(int x) {

        string reverseInt = to_string(x);
        std::reverse(reverseInt.begin(), reverseInt.end());
        try{
            if (x > 0) return stoi(reverseInt);
            return stoi(reverseInt)*(-1);
        } catch(std::out_of_range){
            return 0;
        }


    }
};
