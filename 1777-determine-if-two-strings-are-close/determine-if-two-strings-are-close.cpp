class Solution {
public:
        bool closeStrings(string word1, string word2) {
        if (word1.size()!=word2.size())
        {return false;
        }
        
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        int i=0;
        while (i<word1.size())
        {
            arr1[word1[i]-'a']++;
            arr2[word2[i]-'a']++;i++;
        }
        
        for (int j = 0; j < arr1.size(); j++)
        {
            if ((arr1[j]==0&&arr2[j]==0)||(arr1[j]!=0&&arr2[j]!=0))
            {
            }
            else{
                return false;
            }
            
        }
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());

        if (arr1==arr2)
        {
            return true;
        }
        return false;
        
    }
};