class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long result;
        int mini=INT_MAX;
        int maxi=-1;
        for (int i = 0; i < nums.size(); i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        result=(long long)((long long)(maxi-mini)*k);
        return result;
        
    }
};