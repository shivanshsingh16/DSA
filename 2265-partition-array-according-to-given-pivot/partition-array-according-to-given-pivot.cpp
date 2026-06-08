class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size());
        queue<int> q;
        int x=0;int test=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]<pivot)
            {
                result[x]=nums[i];
                x++;
            }
            else if (nums[i]==pivot)
            {test++;
            }
            else{
                q.push(nums[i]);
            }
        }
        while(test){
            result[x]=pivot;
            x++;test--; 
                   }
        while (q.size())
        {
            result[x]=(q.front());x++;
            q.pop();    
        }
        return result;
        
    }
};