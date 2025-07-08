class Solution {
public:
    int tabla[201][201];
    int f(vector<vector<int>>& grid, int i, int j){
        if(i == grid.size()-1 && j == grid[0].size()-1) return grid[i][j];
        if(tabla[i][j] != -1) return tabla[i][j];
        if(i < 0 || j < 0) return INT_MAX;
        
        int right = (j + 1 < grid[0].size()) ? f(grid, i, j + 1) : INT_MAX;
        int down = (i + 1 < grid.size()) ? f(grid, i + 1, j) : INT_MAX;
        
        tabla[i][j] = min(right, down) + grid[i][j];
        
        return tabla[i][j];
    }

    int minPathSum(vector<vector<int>>& grid){
        
        memset(tabla,-1,sizeof tabla);
        return f(grid,0,0);
        

    }
};
