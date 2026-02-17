class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int i =0;
        int cnt=0;
        char cmp=word[0];
        while (i<word.size())
        {
            if (cmp==word[i])
            {
                cnt++;
                if (cnt>9)
                {
                    comp.push_back('9');
                    comp.push_back(cmp);
                    cnt=1;
                }
                i++;
            }
            else{
                comp.push_back(cnt+'0');
                comp.push_back(cmp);
                cmp=word[i];cnt=0;
            }
        }
        
                comp.push_back(cnt+'0');
                comp.push_back(cmp);
        return comp;
        
    }
};