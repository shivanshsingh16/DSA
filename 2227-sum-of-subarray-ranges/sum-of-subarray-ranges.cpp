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

    vector<int> GreaterNext(vector<int> nums){
        stack<int> stk;
        vector<int> result(nums.size(),0);
        for (int i = nums.size()-1; i >=0;i--)
        {
            while (!stk.empty()&&nums[stk.top()]<=nums[i])
            {
                stk.pop();
            }
            if (stk.empty())
            {
                result[i]=nums.size();
            }
            else{
                result[i]=stk.top();
            }
            stk.push(i);
        }
        return result;
    }

    vector<int> GreaterPrev(vector<int> nums){
        stack<int> stk;
        vector<int> result(nums.size(),0);
        for (int i = 0; i < nums.size(); i++)
        {
            while (!stk.empty()&& nums[stk.top()]<nums[i])
            {stk.pop();
            }
            if (stk.empty())
            {
                result[i]=-1;
            }
            else{
                result[i]=stk.top();
            }
            stk.push(i); 
        }
        return result;
    }

    long long subArrayRanges(vector<int>& nums) {
        vector<int> sp=Smallprev(nums);
        vector<int> sn=Smallnext(nums);
        vector<int> gp=GreaterPrev(nums);
        vector<int> gn=GreaterNext(nums);
        long long small=0;
        long long great=0;
        for (int i = 0; i < nums.size(); i++)
        {
            small=small+((long long)(sn[i]-i)*(i-sp[i])*nums[i]);
            great=great+((long long)(gn[i]-i)*(i-gp[i])*nums[i]);
        }
        return (long long)great-small;
        
        
    }
};