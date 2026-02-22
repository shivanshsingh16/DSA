class Solution {
public:
    
        string smallestNumber(string pattern) {
            int i=0;
            int to_push=2;
            string st="1";
            while (i<pattern.size())
            {
                string s="";
while (i < pattern.size() && pattern[i] == 'I')
                {
                    st.push_back(to_push+'0');
                    to_push++;
                    i++;
                }
                while (i<pattern.size()&&pattern[i]=='D')
                {
                    s.push_back(st[st.size()-1]);
                    st.pop_back();
                    st.push_back(to_push+'0');
                    to_push++;
                    i++;
                    
                }
                reverse(s.begin(),s.end());
                st=st+s;
                
                
            }
            return st;
        }
};