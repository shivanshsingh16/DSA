class Solution {
public:
bool justchecking(vector<vector<char>> &board, int row, int col, int value)
{
    int temp = 0;
    char val = value + '0';
    while (temp < 9)
    {
        if (board[temp][col] == val)
        {
            return false;
        }
        temp++;
    }
    temp=0;
    while (temp < 9)
    {
        if (board[row][temp] == val)
        {
            return false;
        }
        temp++;
    }
    temp=0;
    while (temp<9)
    {
        if (board[3*(row/3)+temp/3][3*(col/3)+temp%3]==val)
        {
            return false;
        }
        temp++;
    }
    return true;
}

bool Sudoku(vector<vector<char>> &board, int col, int row)
{
    if (row==9)
    {
        return true;
    }
    if (col==9)
    {
        return Sudoku(board,0, row+1);
    }
    if (board[row][col]!='.')
    {
        return Sudoku(board,col+1, row);
    }
    for (int val= 1; val <=9; val++)
    {
        if (justchecking(board,row, col , val))
        {
            board[row][col]=val+'0';
            if (Sudoku(board,col+1, row))
            {
                return true;
            }
            else{
                board[row][col]='.';
            }
            
        } 
    }
    return false;
}

void solveSudoku(vector<vector<char>> &board)
{

    Sudoku(board,0,0);
}
};