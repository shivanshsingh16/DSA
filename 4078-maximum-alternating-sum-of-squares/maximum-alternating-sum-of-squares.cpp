class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums){
        priority_queue<int> pq;
        long long result=0;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(abs(nums[i]));
        }
        int popps;
        if (nums.size()%2==0)
        {
            popps=nums.size()/2;
        }
        else{
            popps=(nums.size()+1)/2;
        }

        for (int i = 0; i < popps; i++)
        {
            int x=pq.top();
            pq.pop();
            result+=(x*x);
        }

        while(!pq.empty()){
            int y=pq.top();
            pq.pop();
            result-=(y*y);
        }
        return result;
        
    }
};