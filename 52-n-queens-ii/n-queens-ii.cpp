class Solution {
public:    void QueenCheck(vector<vector<string>> &result,vector<string> &dots,vector<int> &rowCheck,vector<int> &lowerDia,vector<int> &upperDia, int col, int n ){
        if (col==n)
        {
            result.push_back(dots);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (rowCheck[row]==0&&lowerDia[row+col]==0&&upperDia[n-1+col-row]==0)
            {   
                dots[row][col]='Q';
                rowCheck[row]=1;
                lowerDia[row+col]=1;
                upperDia[n-1+col-row]=1;
                QueenCheck(result,dots, rowCheck,lowerDia, upperDia,col+1, n);
                dots[row][col]='.';
                rowCheck[row]=0;
                lowerDia[row+col]=0;
                upperDia[n-1+col-row]=0;
            }
            
            
        }
        
        
    }
    int totalNQueens(int n) {
        vector<vector<string>> result;
        vector<string> dots(n);
        string s(n,'.');
        for (int i = 0; i < n; i++)
        {
            dots[i]=s;;
        }
        vector<int> rowCheck(n,0);
        vector<int> lowerDia((2*n) -1,0);
        vector<int> upperDia((2*n)-1,0);
        QueenCheck(result,dots, rowCheck,lowerDia,upperDia,0, n);
        return result.size();   
    }
};