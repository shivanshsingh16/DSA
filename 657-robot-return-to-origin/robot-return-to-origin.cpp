class Solution {
public:
    bool judgeCircle(string moves) {
        int up_down=0;
        int left_right=0;
        for (int i = 0; i < moves.size(); i++)
        {
            if (moves[i]=='L')
            {
                left_right++;
            }
            else if (moves[i]=='R')
            {
                left_right--;
            }
            else if (moves[i]=='U')
            {
                up_down++;
            }
            else if(moves[i]=='D'){
                up_down--;
            }
            
        }
    return (up_down==0)&&left_right==0;
    }
};