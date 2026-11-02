class Solution {
public:
int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums),end(nums));
        bool isEven=false;
        if (n%2==0)
        {
            isEven=true;
        }
        int median= nums[nums.size()/2];
        
        int result=0;

        for (int num: nums)
        {
            result+=abs(num-median);
        }
        
        
        return result;
    }
};