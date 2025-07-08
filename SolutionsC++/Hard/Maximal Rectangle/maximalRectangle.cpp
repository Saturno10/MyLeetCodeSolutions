class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {


        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols + 1, 0);
        int maxRectangleArea = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == '1'){
                    heights[j]++;
                }else{
                    heights[j] = 0;
                }

            }
            stack<int> s;
            for (int j = 0; j <= cols; ++j) {
                while (!s.empty() && heights[j] < heights[s.top()]) {
                    int height = heights[s.top()];
                    s.pop();
                    int width;
                    if(s.empty()){
                        width = j;
                    } else{
                        width = j - s.top() -1;
                    }
                    maxRectangleArea = max(maxRectangleArea, height * width);
                }
                s.push(j);
            }
        }

        return maxRectangleArea;
    }
};
