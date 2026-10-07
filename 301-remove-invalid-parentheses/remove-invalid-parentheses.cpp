class Solution {
public:

    void rec(vector<string> &answer, int i, int size, int score, string &res, string &s){
        if(score>0){
            return;
        }
        if(i==size){
            if(score==0){
                answer.push_back(res);
            }
            return;
        }

        if(s[i]!='('&&s[i]!=')'){
            res.push_back(s[i]);
            rec(answer,i+1,size, score, res, s);
            res.pop_back();
            return;
        }

        rec(answer,i+1,size, score, res, s);

        if(s[i]=='('){
            res.push_back('(');
            rec(answer, i+1, size, score-1, res, s);
            res.pop_back();
        }
        if(s[i]==')'){
            res.push_back(')');
            rec(answer, i+1, size, score+1, res, s);
            res.pop_back();
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        vector<string> answer;
        vector<string> result;
        string res="";
        rec(answer, 0 , s.size(), 0,res, s);
        unordered_set<string> st;
        int max_size=0;
        for (int i = 0; i < answer.size(); i++)
        {
            st.insert(answer[i]);
            int x=answer[i].size();
            max_size=max(max_size,x);
        }
        for(auto s:st){
            if(s.size()==max_size){
            result.push_back(s);}
        }
        return result;
    }

};