class Solution {
public:

    int trap(vector<int>& height) {
        int left=0,right=height.size()-1,lmax=0,rmax=0,result=0;
        while (left<=right)
        {
            if (height[left]<=height[right])
            {if (lmax-height[left]>0)
            {
                result=result+lmax-height[left];
            }
            
                lmax=max(lmax,height[left]);
                left++;
            }
            else{
                if (rmax-height[right]>0)
                {
                    result=result+rmax-height[right];
                }
                
                rmax=max(rmax,height[right]);
                right--;
            }
            
        }
        return result;
        
    }
};