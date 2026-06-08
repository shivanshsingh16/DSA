class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n =nums.size();
        vector<int> newnums(n);
        int start=0;int p=0;
        int end=n-1;
        int j=nums.size()-1;
        for (int i = 0; i <n; i++)
        {
            if (nums[i]<pivot)
            {
                newnums[start]=nums[i];start++;
            }
            if (nums[n-i-1]>pivot)
            {
                newnums[end]=nums[n-i-1];end--;
            }
            if(nums[i]==pivot){p++;}
        }
        while (p)
        {
            newnums[end]=pivot;end-- ;p--;
        }
        
        return newnums;
        
    }
};