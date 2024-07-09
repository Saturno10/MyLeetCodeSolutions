class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double timeLastOrder = customers[0][1]+customers[0][0];
        double totalTime = customers[0][1];

        for (int i = 1; i < customers.size(); i++){
            if (timeLastOrder < customers[i][0]) {
                totalTime += customers[i][1];
                timeLastOrder = customers[i][0] + customers[i][1];
            } else{
                totalTime += customers[i][1] + (timeLastOrder - customers[i][0]);
                timeLastOrder += customers[i][1];
            }
        }

        return totalTime/customers.size();
    }
};
