class Solution {
public:
    string smallestPalindrome(string s) {
        
        sort(s.begin(),s.begin()+(s.size()/2));
        for (int i = 0; i < s.size()/2; i++)
        {
            s[s.size()-1-i]=s[i];        }
            return s;
    }
};