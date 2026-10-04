class Solution {
public:
bool checkValidString(string s) {   
    stack<int> stk;
    stack<int> ast;
    for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='(')
            {
                   stk.push(i);
               }
            if (s[i]==')')
            {
                if (!stk.empty())
                    {
                        stk.pop();
                    }
                    else if(!ast.empty()){
                        ast.pop();
                    }
                    else{
                        return false;
                    }
                    
                }
                if (s[i]=='*')
                {
                    ast.push(i);
                }
            }
            
            while (!stk.empty()&&!ast.empty())
            {

        if (stk.top()<ast.top())
        {
            ast.pop();stk.pop();
        }
        else{
            return false;
        }
    }
    return stk.empty();
    
}
};