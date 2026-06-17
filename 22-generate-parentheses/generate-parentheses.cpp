class Solution {
public:
    void gen(vector<string> &answer, string &s , int dob ,int size, int bal){
        if (s.size()==dob)
        {
            if (bal==0)
            {
                answer.push_back(s);
            }
            return;
        }
        if (bal>size || bal<0)
        {
            return;
        }
        s.push_back('(');
        gen(answer,s,dob,size,bal+1);
        s.pop_back();
        s.push_back(')');
        gen(answer,s,dob,size,bal-1);
        s.pop_back();
        
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> answer;
        gen(answer, s ,n*2, n, 0);
        return answer;
    }
    
};