class Solution {
public:
    void again(vector<vector<int>> &result, vector<int> &arr, vector<int> &nums,int idx){
        result.push_back(arr);
        for (int i = idx; i < nums.size(); i++)
        {
            if (i>idx && nums[i]==nums[i-1])
            {
                continue;
            }
            arr.push_back(nums[i]);
            again(result,arr,nums,i+1);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> arr;
        again(result,arr,nums,0);
        return result;
    }
};