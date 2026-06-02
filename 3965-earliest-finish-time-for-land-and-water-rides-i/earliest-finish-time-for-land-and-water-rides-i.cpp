class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int result=INT_MAX;
        int minLand=INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++)
        {
            minLand=min(minLand,(landStartTime[i]+landDuration[i]));
        }
        for (int i = 0; i < waterStartTime.size(); i++)
        {
            result=min(result,(max(waterStartTime[i],minLand)+waterDuration[i]));
        }
        minLand=INT_MAX;
        for (int i = 0; i < waterStartTime.size(); i++)
        {
            minLand=min(minLand,(waterStartTime[i]+waterDuration[i]));
        }
        for (int i = 0; i < landStartTime.size(); i++)
        {
            result=min(result,(max(landStartTime[i],minLand)+landDuration[i]));
        }
        return result;
        
    }
};