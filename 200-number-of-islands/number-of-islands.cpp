class Solution {
public:
void bfsIsland(vector<vector<char>> &grid, vector<vector<bool>>& vis,vector<vector<int>> &moving, int i , int j){
        vis[i][j]=true;
        for (auto it:moving)
        {
            int new_i=i+it[0];
            int new_j=j+it[1];
            if (new_i>=0&&new_i<grid.size()&&new_j>=0&&new_j<grid[0].size()&&grid[new_i][new_j]=='1'&&!vis[new_i][new_j])
            {
                bfsIsland(grid, vis, moving, new_i, new_j);
            }
        }
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        vector<vector<int>> moving={{-1,0},{0,1},{1,0},{0,-1}};
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j]=='1'&&!vis[i][j])
                {
                    cnt++;
                    bfsIsland(grid,  vis, moving,i, j);
                }
                
            }
            
        }
        return cnt;
    }
};