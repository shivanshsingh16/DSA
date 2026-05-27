class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<pair<int,int>> vec(26, {-1,-1});
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i]>='a'&&word[i]<='z')
            {
                vec[word[i]-'a'].first=i;
            }
            else if(vec[word[i]-'A'].second==-1){
                vec[word[i]-'A'].second=i;
            }
            
        }
        
        int cnt=0;
        for (int i = 0; i < 26; i++)
        {
            if (vec[i].first<vec[i].second&&vec[i].first!=-1)
            {cnt++;
            }
            
        }
        return cnt;
    
        
        
    }
};