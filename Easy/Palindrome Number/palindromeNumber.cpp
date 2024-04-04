class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        int begin = 0;
        int end = number.length()-1;
        while(begin < end){
            if(number[begin] != number[end]) return false;
            begin++;
            end--;
        }
        return true;

    }
};
