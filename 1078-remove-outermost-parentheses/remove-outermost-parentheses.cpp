class Solution {
public:
string removeOuterParentheses(string s){
            int open=0;
            string result="";
            stack<char> stk;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i]=='(')
                {
                    if (open==0)
                    {
                        open=1;
                    }
                    else{
                        result+='(';
                        stk.push('(');
                    }
                    
                }
                else{
                    if (!stk.empty()&&stk.top()=='(')
                    {
                        result+=')';
                        stk.pop();
                    }
                    else{
                        open=0;
                    }
                }
                
            }
            return result ;
        }
};