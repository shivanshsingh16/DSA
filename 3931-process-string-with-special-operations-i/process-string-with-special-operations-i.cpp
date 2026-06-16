class Solution {
public:
    string processStr(string s) {
        string result="";

        for (int i = 0; i < s.size(); i++)
        {
            if (result.size()!=0&&s[i]=='*')
            {
                result.pop_back();
            }
            else if(s[i]=='#'){
                string f=result;
                for (int j = 0; j < f.size(); j++)
                {
                    result.push_back(f[j]);
                }
            }
            else if (s[i]=='%')
            {
                reverse(result.begin(),result.end());
            }
            else if(s[i]>='a' && s[i]<='z'){
                result.push_back(s[i]);
            }
            
        }
        
        return result;
    }
};