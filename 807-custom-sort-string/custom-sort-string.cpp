class Solution {
public:
    string customSortString(string order, string s) {
        int arr[26]={0};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]-'a']++;
        }
        string result="";
        for (int i = 0; i < order.size(); i++)
        {
            while (arr[order[i]-'a']!=0)
            {
                result.push_back(order[i]);
                arr[order[i]-'a']--;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            while (arr[i]!=0)
            {
                result.push_back(i+'a');
                arr[i]--;
            }
        }
        return result;
    }
};