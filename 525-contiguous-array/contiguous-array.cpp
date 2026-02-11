class Solution {
public:
    int findMaxLength(vector<int>& nums) {

       unordered_map<int,int> mpp;
        mpp[0]=-1;
        int cnt=0;
        int result=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==0)
            {cnt--;
            }
            else{
                cnt++;
            }
            if (mpp.find(cnt)!=mpp.end())
            {
                result=max(result,i-mpp[cnt]);
            }
            else{            mpp[cnt]=i;
            }
            
        }
        return result;
        

    
    }
};