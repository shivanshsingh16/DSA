class Solution {
public:
int maxSum(vector<int>& nums, int k) {
        vector<int> count(32,0);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j= 0; j < 32; j++)
            {
                if (nums[i]&(1<<j))
                {
                    count[j]++;
                }
            }
            
        }
        long long result=0;
        for (int i = 0; i < k; i++)
        {
            long long temp=0;
            for (int j = 0; j < 32; j++)
            {
                if (count[j]>0)
                {
                    temp=temp|(1<<j);
                    count[j]--;
                }
            }
            result=(result+(temp*temp))%(1000000007);
        }
        
        return result;
    }
};