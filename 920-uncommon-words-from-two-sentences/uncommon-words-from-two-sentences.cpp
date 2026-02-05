class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mpp;
        stringstream ss(s1);
        string token;
        while (ss>>token )
        {
            mpp[token]++;
        }
        stringstream ss2(s2);
        string token2;
        while (ss2>>token2)
        {
            mpp[token2]++;
        }
        vector<string> result;
        for(auto &it:mpp){
            if (it.second==1)
            {
                result.push_back(it.first);
            }
            
        }
        
        
        return result;
    }
};