class Solution {
public:
    void forsub(vector<vector<int>> &answer,vector<int> &nums,int i,vector<int> &arr){
        if (i==nums.size())
        {
            answer.push_back(arr);
            return;
        }
        forsub(answer,nums,i+1,arr);
        arr.push_back(nums[i]);
        forsub(answer,nums,i+1,arr);
        arr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> answer;
         vector<int> arr;
         forsub(answer, nums,0, arr);
         return answer;
    }
};