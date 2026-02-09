class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (mpp.find(t[i])!=mpp.end())
            {
                mpp[t[i]]--;
            if (mpp[t[i]]==0)
            {
                mpp.erase(t[i]);
            }
            }
        }
        int result=0;
for (auto& p : mpp) {
    result += p.second;
}

        return result;
        
        
    } 
};