class Solution {
public:
    

    int minimumDeletions(string s) {
        int n = s.size();
        int table[n+1][2];
        table[0][0] = 0;
        table[0][1] = 0;
        for (int i = 1; i <= n; i++){
            if (s[i-1] == 'a') {
                table[i][0] = table[i-1][0];
                table[i][1] = min(table[i-1][0], table[i-1][1]) + 1;
            } else {
                table[i][0] = table[i-1][0] + 1;
                table[i][1] = min(table[i-1][0], table[i-1][1]);
            }
            
        }

        return min(table[n][0], table[n][1]);
        
        
    }
};
