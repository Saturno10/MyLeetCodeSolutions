class Solution {
public:
    bool isAnagram(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1 == s2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string,vector<string>> mapAnagrams;
        for (const string& word : strs){
            string key = word;
            sort(key.begin(),key.end());
            mapAnagrams[key].push_back(word);
        }
        anagrams.reserve(mapAnagrams.size());
        for (auto [key, anagramVector]: mapAnagrams) {
            anagrams.push_back(anagramVector);
        }
        return anagrams;
    }
};
