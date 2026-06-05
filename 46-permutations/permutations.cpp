class Solution {
public:
void per(vector<vector<int>> &result, vector<int> &mpp,vector<int> nums,vector<int> &arr,int idx){
    if (arr.size()==nums.size())
    {
        result.push_back(arr);
        return ;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (mpp[i]==0)
        {
            mpp[i]=1;
            arr.push_back(nums[i]);
            per(result,mpp,nums,arr,i+1);
            arr.pop_back();
            mpp[i]--;
        }
        
    }
    
    
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> mpp(nums.size(),0);
        vector<vector<int>> result;
        vector<int> arr;
        per(result,mpp,nums,arr,0);
        return result;
    }
};