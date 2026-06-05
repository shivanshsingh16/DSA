class Solution {
public:
    void persay(vector<vector<int>> &result,vector<int> arr,vector<int> &nums, int idx){
        if (idx==nums.size())
        {
            result.push_back(nums);
        return ;
        }
        for (int i = idx; i < nums.size(); i++)
        {
            swap(nums[i],nums[idx]);
            persay(result,arr,nums,idx+1);
            swap(nums[i],nums[idx]);
        }
    }

        vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> arr;
        persay(result,arr,nums,0);
        return result;
    }
};