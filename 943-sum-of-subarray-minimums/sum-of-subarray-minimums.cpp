class Solution {
public:
    vector<int> Smallprev(vector<int> nums){
        vector<int> result(nums.size(),0);
        int i=0;
        stack<int> stk;
        while (i<nums.size())
        {
            while (!stk.empty()&&nums[stk.top()]>=nums[i])
            {
                stk.pop();
            }
            
            if (stk.empty())
            {result[i]=-1;
            }
            else{
                result[i]=stk.top();
            }
            stk.push(i);
            i++;}
            return result;
    }

    vector<int> Smallnext(vector<int> nums){
        stack<int> stk;
        vector<int> result(nums.size(),0);
        int i =nums.size()-1;
        while (i>=0)
        {
            while (!stk.empty()&&nums[stk.top()]>nums[i])
            {stk.pop();
            }
            if (stk.empty())
            {result[i]=nums.size();
            }
            else{
                result[i]=stk.top();
            }
            stk.push(i);
            i--;
        }
        return result;
    }


    int sumSubarrayMins(vector<int>& arr) {
        vector<int> p=Smallprev(arr);
        vector<int> n=Smallnext(arr);
        
        int m=1e9+7;
        int result=0;
        for (int i = 0; i < arr.size(); i++)
        {
             result=(result+((i-p[i])*(n[i]-i)*1LL*arr[i])%m)%m;
        }
        return result;
        
    }
};