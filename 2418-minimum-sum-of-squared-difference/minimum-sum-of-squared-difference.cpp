class Solution {
public:

long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        int k = k1 + k2;    
        vector<int> diffs(1e5+1,0);
        for (int i = 0; i < n; i++)
        {
            diffs[abs(nums1[i]-nums2[i])]++;
        }

        for (int i = 1e5; i > 0&&k>0; i--)
        {
            int minOp=min(diffs[i],k);
            diffs[i]-=minOp;
            diffs[i-1]+=minOp;
            k-=minOp;
        }
        
        long long result=0;
        for (long long  i = 1; i <=1e5; i++)
        {
            result+=diffs[i]*i*i;
        }
        return result;
        

    }
};