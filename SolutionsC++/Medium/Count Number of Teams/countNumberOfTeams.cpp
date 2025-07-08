class Solution {
public:
    
    int numTeams(vector<int>& rating) {
        int teams = 0;
        if (rating.size() >= 3) {
            int n = rating.size();
            vector<int> greater(n, 0);
            vector<int> less(n, 0);
            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    if (rating[j] > rating[i]) {
                        greater[i]++;
                    } else if (rating[j] < rating[i]) {
                        less[i]++;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    if (rating[j] > rating[i]) {
                        teams += greater[j];
                    } else if (rating[j] < rating[i]) {
                        teams += less[j];
                    }
                }
            }
        }
        
        return teams;
        
        
    }
    
};
