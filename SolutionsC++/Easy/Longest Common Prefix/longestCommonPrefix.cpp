class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        string prefix;
        string shortestString = *min_element(strs.begin(),strs.end(),
                                            [] (const string&s1, const string& s2){
                                                        return s1.length()<s2.length(); });
        for (int i = 0; i < shortestString.length(); ++i) {

            char possibleChar = shortestString[i];
            for (string word : strs) {
                if(word[i] != possibleChar){
                    return  prefix;
                }
            }

            prefix+=possibleChar;

        }
        return prefix;
    }
};
