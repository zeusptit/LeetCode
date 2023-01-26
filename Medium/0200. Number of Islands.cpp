class Solution {
public:
    pair<int,int> path[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    void Try(int i, int j, vector<vector<char>>& grid){
        grid[i][j] = '0';
        for(int k = 0; k < 4; k++){
            int inew = path[k].first + i;
            int jnew = path[k].second + j;
            if(inew >= 0 && inew < grid.size() && jnew >= 0 && jnew < grid[inew].size() && grid[inew][jnew] == '1'){
                Try(inew, jnew, grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    Try(i, j, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};