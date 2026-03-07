class Solution {
public:
    int minOperations(string s) {
        int zeroFirst=0;
        int oneFirst=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i%2==0)
            {
                if (s[i]!='1')
                {
                    oneFirst++;
                }
                else{
                    zeroFirst++;
                }
            }
            else{
                if (s[i]!='0')
                {
                    oneFirst++;
                }
                else{
                    zeroFirst++;
                }
            }
            
        }
        return min(zeroFirst,oneFirst);
            
    }
};