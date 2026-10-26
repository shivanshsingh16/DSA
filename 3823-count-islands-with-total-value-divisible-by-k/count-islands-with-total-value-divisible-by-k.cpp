class Solution {
public:
long long IslandCheck(vector<vector<int>> & grid, int n , int m , int i , int j){
        if (i<0||j>=m||i>=n||j<0)
        {
            return 0;
        }
        if (grid[i][j]==0)
        {return 0;
        }
        int test=grid[i][j];
        grid[i][j]=0;

        
        long long left=IslandCheck(grid, n , m ,i-1, j);
        long long right=IslandCheck(grid, n , m ,i+1, j);
        long long up=IslandCheck(grid, n , m ,i, j-1);
        long long down=IslandCheck(grid, n , m ,i, j+1);

        return (long long)(test+left+down+right+up);
        
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int result=0;
        int n=grid.size();
        vector<int> arr;
        int m =grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int  j  = 0; j<m; j++)
            {
                if (grid[i][j]!=0)
                {
                    long long x=IslandCheck(grid, n,m, i , j);
                    if (x%k==0)
                    {
                        result++;
                    }
                    
                }
                
            }
            
        }
        
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]%k==0)
            {
                result++;
            }
            
        }
        
        return result;
    }
};