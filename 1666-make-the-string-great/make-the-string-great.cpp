class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        int i=0;
        while (i<s.size())
        {
            if (!stk.empty()&&((stk.top()-s[i]==-32)||(stk.top()-s[i]==32)))
            {
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
            i++;
        }
        string result="";
        while (!stk.empty())
        {
            result=result+stk.top();
            stk.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }

};