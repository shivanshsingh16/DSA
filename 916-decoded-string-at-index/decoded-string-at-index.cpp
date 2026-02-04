class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                size++;
            }
            else{
                int x=s[i]-'0';
                size=size*x;
            }
        }
        int n =s.size()-1;
        while(n>=0){
            k=k%size;
           if (k==0&& isalpha(s[n]))
            {
                return {s[n]};
            }
            else{
                if (isalpha(s[n]))
                {
                    size--;
                }
                else{
                    size=size/(s[n]-'0');
                }
            }
            n--;
            
        }
        return {};
    }
};