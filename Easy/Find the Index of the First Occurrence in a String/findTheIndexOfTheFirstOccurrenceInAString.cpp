class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle) return 0;
        if(haystack.length() < needle.length()) return -1;
        int index = 0;
        while (index<haystack.length()-needle.length()+1){
            if(haystack[index] != needle[0]){
                index++;
                continue;
            }
            bool found = true;
            for (int i = 0; i < needle.length(); ++i) {
                if(haystack[index+i] != needle[i]){
                    index+=1;
                    found = false;
                    break;
                }
            }
            if (found) return index;

        }
        return -1;
    }
};
