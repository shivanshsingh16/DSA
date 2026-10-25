class Solution {
public:
bool check(vector<vector<int>> &grid , int x, int y, int n , int m ){

        if (x>=n||x<0||y<0||y>=m)
        {
            return false;
        }
        if (grid[x][y]==1)
        {
            return true;
        }
        grid[x][y]=1;
        bool left=check(grid, x-1, y, n, m);
        bool right=check(grid, x+1, y, n, m);
        bool up=check(grid, x, y+1, n, m);
        bool down=check(grid, x, y-1, n, m);

        return left&& right&& up&& down;
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        int m=grid[0].size();
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j]==0)
                {
                    if (check(grid, i , j , n , m ))
                    {
                        count++;
                    }
                    
                }
                
            }
            
        }
        return count;
        
    }
};