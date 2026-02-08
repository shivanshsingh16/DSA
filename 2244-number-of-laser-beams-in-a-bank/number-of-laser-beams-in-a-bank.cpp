class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int i=0;
        int result=0;
        int prevCnt=0;
        int currCnt=0;

        while (i<bank.size())
        {
            currCnt=0;
            int j=0;
            bool allZero=true;
            while (j<bank[i].size())
            {
                if (bank[i][j]=='1')
                {
                    currCnt++;
                    allZero=false;
                }
                
                j++;

            }
            result=result+prevCnt*currCnt;
            if (allZero==false)
            {
                prevCnt=currCnt;
            }
            
            i++; 
            
        }
        
        return result;
    }
};