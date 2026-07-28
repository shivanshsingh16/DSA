class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1){return s;}
        int arr[26]={0};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]-'a']++;
        }
        string real="";
            string rev="";
        char mid=0;
        for (int i = 0; i < 26; i++)
        {
            int x=arr[i];
            while(true){
                if (x%2==1)
                {
                    mid=i+'a';
                    x--;
                }
                if(x==0){break;}
                real.push_back(i+'a');
                rev.push_back(i+'a');
                x=x-2;
            }
        }
        reverse(rev.begin(),rev.end());
        if (mid)
        {
            real.push_back(mid);
        }
        return real+rev;
        
        
    }
};