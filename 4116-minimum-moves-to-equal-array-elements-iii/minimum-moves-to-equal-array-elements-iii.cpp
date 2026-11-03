class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minimum=nums[0];
        for (int i = 1; i < nums.size(); i++)
        {

                minimum=max(minimum,nums[i]);
            
        }
        int result=0;  
        for (int i = 0; i < nums.size(); i++)
        {
            result+=minimum-nums[i];
        }
        return result;
    }
};