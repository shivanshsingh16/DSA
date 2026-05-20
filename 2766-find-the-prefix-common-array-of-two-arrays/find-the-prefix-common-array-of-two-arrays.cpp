class Solution {
public:
     vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        for (int k = 0; k<A.size(); k++)
        {
            int cnt=0;
            for (int i = 0; i<=k; i++)
            {
                for (int j=0 ;j<=k; j++)
                {
                    if (A[i]==B[j])
                    {cnt++;
                    }
                    
                }
                
            }
            result.push_back(cnt);
        }
        return result;
        
        
    }
};