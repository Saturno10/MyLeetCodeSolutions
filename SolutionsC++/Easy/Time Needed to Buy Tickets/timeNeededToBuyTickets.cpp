class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k){
        int time = 0;
        int turn = 0;
        while(tickets[k]){
            if(tickets[turn]){
                tickets[turn]--;
                time++;
                turn = (turn+1)%tickets.size();
            }else{

                tickets.erase(tickets.begin()+turn);
                if(tickets.empty()) break;
                if (turn < k) k--;
                if(turn > tickets.size()-1) turn = 0;
            }
        }
        return time;
    }
};
