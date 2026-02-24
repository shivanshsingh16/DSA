class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result(nums.size());
        stack<int> stk;
        int i =(2*nums.size())-1;
        while (i>=0)
        {
            while (!stk.empty()&&stk.top()<=nums[i%nums.size()])
            {
                stk.pop();
            }
            if (stk.empty())
            {
                stk.push(nums[i%nums.size()]);
                result[i%nums.size()]=-1;
            }
            else{
                result[i%nums.size()]=stk.top();
                stk.push(nums[i%nums.size()]);
            }
            i--;
        }
        return result;
    }
};