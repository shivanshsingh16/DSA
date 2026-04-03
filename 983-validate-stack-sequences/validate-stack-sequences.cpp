class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i =0;
        int j =0;
        stack<int> stk;
        while (i<pushed.size())
        {
            while (!stk.empty()&&stk.top()==popped[j])
            {j++;
            stk.pop();}
            stk.push(pushed[i]);
            i++;

        }
        while (!stk.empty())
        {
            if (stk.top()==popped[j])
            {
                j++;stk.pop();
            }
            else{
                return false;
            }
            
        }
        return true;
        
    }
};