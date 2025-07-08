class Solution {
public:
    int maxDistance(string s, int k) {
        map<char, int> directions;
        int x;
        int y;
        int manhattan = 0;
        for (char move : s){
            directions[move]++;
            x = min(directions['N'], min(directions['S'], k));
            y = min(directions['E'], min(directions['W'], k-x));
            manhattan = max(
            manhattan,
            abs(directions['N'] - directions['S']) + x*2 +
            abs(directions['E'] - directions['W']) + y*2
            );
        }
        return manhattan;


    }
};
