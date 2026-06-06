class Solution {
public:
    bool checkQ(vector<string> &dots, int row, int col, int n ){
        for (int i = 0; i < col; i++) {
            if (dots[row][i]=='Q')
            {return false;
            }
        }
        
        int tempCol=col;
        int tempRow=row;
        while (tempRow>=0&&tempCol>=0)
        {
            if (dots[tempRow][tempCol]=='Q')
            {return false;
            }
            tempRow--;
            tempCol--;
        }
        
        tempCol=col;
        tempRow=row;
        while (tempCol>=0&&tempRow<n)
        {
            if (dots[tempRow][tempCol]=='Q')
            {
                return false;
            }
            tempRow++;
            tempCol--;
        }
        return true;
    }

    void queens(vector<vector<string>> &result,vector<string> dots, int col, int n ){
        if (col==n)
        {
            result.push_back(dots);return;
        }
        for (int row = 0; row<n; row++)
        {
                if (checkQ(dots, row, col , n ))
                {
                    dots[row][col]='Q';
                    queens(result,dots, col+1,n );
                    dots[row][col]='.';
                }
            
        }
        
        
    }

   vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> dots(n);
        string s(n,'.');
        for (int i = 0; i < n; i++)
        {
            dots[i]=s;;
        }
        queens(result,dots , 0 , n);
        return result;   
    }
};