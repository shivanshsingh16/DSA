class Solution {
public:
string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mpp;
        for (int i = 0; i < knowledge.size(); i++)
        {
            mpp[knowledge[i][0]]=knowledge[i][1];
        }


        string result="";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='(')
            {
                string temp="";
                i++;
                while (s[i]!=')')
                {
                    temp.push_back(s[i]);
                    i++;
                }
                if (mpp.find(temp)==mpp.end())
                {
                    result.push_back('?');
                }
                else{
                    string new_temp=mpp[temp];
                    for (int k = 0; k < new_temp.size(); k++)
                    {
                        result.push_back(new_temp[k]);
                    }
                    
                }
            }
            else{
                result.push_back(s[i]);
            }
        }
        
        return result;
        
    }
};