class Solution {
public:
    bool checkOnesSegment(string s) {
        int IsZero=0;
        for (int  i = 1; i < s.size(); i++)
        {
            if (s[i]=='0')
            {IsZero=1;
            }
            if (IsZero&&s[i]=='1')
            {
                return false;
            }
            
            
        }
        return true;
        
    }
};