class Solution {
public:
     int removeCoveredIntervals(vector<vector<int>>& intervals) {
    int cnt=1;
        auto lambda=[](vector<int>& vec1, vector<int>& vec2){
            if (vec1[0]==vec2[0])
            {
                return vec1[1]>vec2[1];
            }
            return vec1[0]<vec2[0];
        };
        sort(intervals.begin(),intervals.end(),lambda);
        int check=intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (check>=intervals[i][1])
            {
                continue;
            }
            check=intervals[i][1];
            cnt++;
            
        }
        return cnt;

        
    }
};