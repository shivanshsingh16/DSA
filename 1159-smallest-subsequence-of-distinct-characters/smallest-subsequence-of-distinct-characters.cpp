class Solution {
public:
    string smallestSubsequence(string s) {
         int lastOcc[26]={0};
        for (int i = 0; i < s.size(); i++)
        {
            lastOcc[s[i]-'a']=i;
        }
        string result="";
        int occ[26]={0};
        for (int n = 0; n < s.size(); n++)
        {
            if(occ[s[n]-'a']==1){continue;}
                while (!result.empty()&&(result.back()-s[n]>0)&&(lastOcc[result.back()-'a']>n))
                {
                    occ[result.back()-'a']=0;
                    result.pop_back();
                }
                result.push_back(s[n]);
                occ[s[n]-'a']=1;        
            }
            return result;

    }
};