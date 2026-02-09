class Solution {
public:
    int minSteps(string s, string t) {
        int arr[26]={0};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        int result=0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i]>0)
            {
                result=result+arr[i];
            }
            
        }
        
        return result;
    }  
};