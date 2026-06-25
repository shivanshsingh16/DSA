class Solution {
public:

    int countMajoritySubarrays(vector<int>& nums, int target) {   
        int answer=0;
        for (int i = 0; i < nums.size(); i++)
        {
            int check=0;
            for (int j = i; j < nums.size(); j++)
            {
                if (nums[j]==target)
                {
                    check++;
                }
                if (2*check>(j-i+1))
                {
                    answer++;
                }
                
            }   
        }
        return answer;
    }
};