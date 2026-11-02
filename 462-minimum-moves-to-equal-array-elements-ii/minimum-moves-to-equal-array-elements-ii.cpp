class Solution {
public:
int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums),end(nums));
        int median= nums[n/2];
        
        int result=0;

        for (int num: nums)
        {
            result+=abs(num-median);
        }
        
        
        return result;
    }
};