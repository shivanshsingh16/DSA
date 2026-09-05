class Solution {
public:
int firstStableIndex(vector<int>& nums, int k) {
    
        int n =nums.size();
        vector<int> mins(n,0);
        for (int i = n-1; i >=0; i--)
        {
            if (i==n-1)
            {
                mins[i]=nums[i];
            }
            else{
                mins[i]=min(mins[i+1],nums[i]);
            }
            
        }
        int fin_ans=INT_MAX;
        int temp_idx=-1;
        int maxi=-1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]>maxi)
            {
                maxi=nums[i];
            }
            int temp=maxi-mins[i];
            if (temp<fin_ans)
            {
                if(temp<=k){return i;}
                fin_ans=temp;
                temp_idx=i;
                
            }
            
            
        }
        
        

        return -1;

    }
};