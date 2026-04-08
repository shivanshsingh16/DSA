class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int m=1e9+7;
        for (int i = 0; i < queries.size(); i++)
        {
            int x=queries[i][0];
            while (x<=queries[i][1])
            {
                nums[x]=(1LL*nums[x]*queries[i][3])%m;
                x+=queries[i][2];
            }
            
        }
        int result=0;
        for (int i = 0; i < nums.size(); i++)
        {
            result=result^nums[i];
        }
        
        return result;
        
    }
};