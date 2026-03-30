class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        int i=0;
        while (i<s1.size())
        {
            if (i%2==0)
            {
                arr1[s1[i]-'a']++;
                arr1[s2[i]-'a']--;
            }
            else{
                arr2[s1[i]-'a']++;
                arr2[s2[i]-'a']--;
            }
            i++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr1[i]!=0||arr2[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};