class Solution {
public:
   int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mpp;
        int i=0;long long mini=INT64_MAX;
        while (i<nums.size())
        {
            if (mpp.find(nums[i])==mpp.end())
            {
                mpp[nums[i]].push_back(i);
            
            }
            else{
                if (mpp[nums[i]].size()==1)
                {
                    mpp[nums[i]].push_back(i);
                }
                else{
                    int n=mpp[nums[i]].size();
                    mini=min(mini,(long long)abs(mpp[nums[i]][n-1]-mpp[nums[i]][n-2])+abs(mpp[nums[i]][n-1]-i)+abs(mpp[nums[i]][n-2]-i));
                    mpp[nums[i]].push_back(i);
                }
            }
            i++;
            
        }if (mini == INT64_MAX) return -1;
return mini;

    }
};