class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int result=0;
        int i=0;int j=0;
        while (j<nums.size())
        {
            if (nums[j]<=(long long)k* nums[i])
            {
                result=max(result,j-i+1);
                j++;
            }
            else{
                i++;
            }
            
        }
        return nums.size()-result;
        
    }
};