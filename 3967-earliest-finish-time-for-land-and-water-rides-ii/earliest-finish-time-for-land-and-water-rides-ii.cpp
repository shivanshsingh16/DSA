class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int a=landStartTime.size();
        int b=waterStartTime.size();
        int result= INT_MAX;
        int minLand=INT_MAX;
        int minWater=INT_MAX;
        for (int i = 0; i < a; i++)
        {
            minLand=min(minLand,landDuration[i]+landStartTime[i]);
        }
        for (int i = 0; i < b; i++)
        {
            result=min(result,max(minLand,waterStartTime[i])+waterDuration[i]);
        }


        for (int i = 0; i < b; i++)
        {
            minWater=min(minWater,(waterStartTime[i]+waterDuration[i]));
        }
        for (int i = 0; i < a; i++)
        {
            result=min(result,max(landStartTime[i],minWater)+landDuration[i]);
        }

        return result;
        
        
    }
};