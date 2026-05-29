class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;int sum;
        for (int i = 0; i < nums.size(); i++)
        {
            sum=0;
            int x=nums[i];
            while (x!=0)
            {
                sum+=x%10;
                x=x/10;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};