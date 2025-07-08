class Solution {
public:
    string removeKdigits(string num, int k){
        if (num.length() == k) return "0";

        for (int i = 0; i < num.length()-1 && k > 0; ++i) {

            while (k>0 && num[i] > num[i+1]){
                num.erase(num.begin()+i);
                k--;
                if (i) i--;
            }
            


        }
        while (k){
            num.pop_back();
            k--;
        }


        while(num[0] == '0' && num.length() > 1){
            num.erase(num.begin());
        }

        return num;

    }




};
