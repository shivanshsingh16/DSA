class Solution {
public:
int minOperations(string s) {
        string temp=s;
        sort(begin(temp), end(temp));
        if(temp==s){
            return 0;
        }
        if(s.size()==2){return -1;}

        char min_char_mid='z';
        char min_char='z';
        char max_char='a';
        char max_char_mid='a';
        for (int i = 0; i < s.size(); i++)
        {
            if(i>=1&& i<s.size()-1){
                min_char_mid=min(min_char_mid, s[i]);
                max_char_mid=max(max_char_mid, s[i]);
            }
            min_char=min(min_char, s[i]);
            max_char=max(max_char, s[i]);
        }


        if(s[0]==min_char||s[s.size()-1]==max_char){
            return 1;
        }   
        if (s[0]>max_char_mid&&s[s.size()-1]<min_char_mid)
        {
            return 3;
        }else{
            return 2;
        }
        
        
        
    }
};