class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int result= INT_MAX;
        int minLand=INT_MAX;
        int minWater=INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++)
        {
            minLand=min(minLand,landDuration[i]+landStartTime[i]);
        }
        for (int i = 0; i < waterStartTime.size(); i++)
        {
            result=min(result,max(minLand,waterStartTime[i])+waterDuration[i]);
        }


        for (int i = 0; i < waterStartTime.size(); i++)
        {
            minWater=min(minWater,(waterStartTime[i]+waterDuration[i]));
        }
        for (int i = 0; i < landStartTime.size(); i++)
        {
            result=min(result,max(landStartTime[i],minWater)+landDuration[i]);
        }

        return result;
        
        
    }
};