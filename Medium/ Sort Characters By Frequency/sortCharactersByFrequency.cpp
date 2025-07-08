class Solution {
public:

    static bool sorter(pair<char,int> a, pair<char,int> b){
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    }

    string frequencySort(string s) {
        map<char, int> charMap;
        string solution;
        for(auto character : s){
            charMap[character]++;
        }
        vector<pair<char,int>>  frecuencias(charMap.begin(),charMap.end());
        sort(frecuencias.begin(), frecuencias.end(), sorter);
        for(auto value : frecuencias){
            for (int i = 0; i < value.second; ++i) {
                solution+=value.first;
            }
        }

        return solution;
    }
};
