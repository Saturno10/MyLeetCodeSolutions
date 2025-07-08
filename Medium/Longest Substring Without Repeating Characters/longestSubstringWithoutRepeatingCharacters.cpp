class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0;
        int left = 0;
        int right =  left;
        unordered_map<char,int> umap;
        while(right < s.length()){
            if(umap.find(s[right]) != umap.end() && umap[s[right]] >=left){
                left = umap[s[right]]+1;
            }
            umap[s[right]] = right;
            maxlength = max(maxlength, right-left+1);
            right++;
        }
        return maxlength;
    }
};
