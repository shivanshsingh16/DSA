class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int hash[26]={0};
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i]-'a']++;
        }
        string repeatLimitedString ="";
        int cntRepeat=0;
        int i=25;
        while (i>=0)
        {
            if (hash[i]==0)
            {i--;
            }
            else{
                while (cntRepeat<repeatLimit&&hash[i]!=0)
                {
                repeatLimitedString.push_back(i+'a');
                hash[i]--;
                cntRepeat++;
                }
                if (hash[i]==0)
                {
                    cntRepeat=0;
                    continue;
                }
                int j=i-1;
                while (j>=0&&hash[j]==0)
                {
                    j--;
                }
                if (j<0)
                {
                    return repeatLimitedString;
                }
            repeatLimitedString.push_back(j+'a');
            hash[j]--;
            cntRepeat=0;
                
            }
            
        }
        
        return repeatLimitedString;
    }
};