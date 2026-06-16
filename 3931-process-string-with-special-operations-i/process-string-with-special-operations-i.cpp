class Solution {
public:
    string processStr(string s) {
        string result="";

        for (int i = 0; i < s.size(); i++)
        {
            if (result.size()!=0&&s[i]=='*')
            {
                result.erase(result.size()-1);
            }
            else if(s[i]=='#'){
                
                result+=result;
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