class Solution {
public:
    int longestBeautifulSubstring(string word) {
        if (word.size()<5)
        {
            return 0;
        }
        int j=1;
        int answer=0;
        int left=0;
        while (left<word.size())
        {
            int a=0;
            int e=0;
            int i=0;
            int o=0;
            int u=0;

            while (left<word.size()&& word[left]=='a')
            {
                a++;
                left++;
            }
            while (left<word.size()&& word[left]=='e')
            {
                e++;
                left++;
            }
            while (left<word.size()&& word[left]=='i')
            {
                i++;
                left++;
            }
            while (left<word.size()&& word[left]=='o')
            {
                o++;
                left++;
            }
            while (left<word.size()&& word[left]=='u')
            {
                u++;
                left++;
            }
            
            if (a>0&&e>0&&i>0&&o>0&&u>0)
            {
                answer=max(answer,a+e+i+o+u);
            }

            
        }
        
        return answer;
        
    }
};