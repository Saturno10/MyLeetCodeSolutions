class Solution {
    vector<vector<int>> events;
    vector<int> starts;
    vector<vector<int>> tableDynamic;
    int n;

public:
    int maxValue(vector<vector<int>>& events, int k) {
        this->events = events;
        sort(this->events.begin(), this->events.end());
        n = this->events.size();

        starts.clear();
        for (const auto& e : this->events) {
            starts.push_back(e[0]);
        }

        tableDynamic = vector<vector<int>>(k + 1, vector<int>(n, -1));

        return dynamicMax(0, k);
    }

    int dynamicMax(int cur_index, int count) {
        if (count == 0 || cur_index == n) return 0;
        if (tableDynamic[count][cur_index] != -1) return tableDynamic[count][cur_index];


        int next_index = upper_bound(starts.begin(), starts.end(), events[cur_index][1]) - starts.begin();

        int skip = dynamicMax(cur_index + 1, count);
        int take = events[cur_index][2] + dynamicMax(next_index, count - 1);
        tableDynamic[count][cur_index] = max(skip, take);

        return tableDynamic[count][cur_index];
    }
};
