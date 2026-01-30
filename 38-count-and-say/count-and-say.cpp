class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for (int i = 0; i < n-1; i++)
        {
            string s1=s;
            s="";
            int j=0;
            while (j<s1.size())
            {
                int cnt=0;
                char curr=s1[j];
                while (j<s1.size()&&curr==s1[j])
                {
                    j++;
                    cnt++;
                }
                string num=to_string(cnt);
                s=s+num;
                s.push_back(curr);
            }
            
        }
        return s;
        
    }
};