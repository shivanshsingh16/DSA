class Solution {
public:
bool checkVal(int val,unordered_set<int> s1){
        if (s1.find(val)!=s1.end())
        {return false;
        }
        return true;
        
    }
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,unordered_set<int>> mpp;
        for (int i = 0; i < reservedSeats.size(); i++)
        {
            mpp[reservedSeats[i][0]].insert(reservedSeats[i][1]);
        }
        int answer=(n-mpp.size())*2;
        for (auto &it:mpp)
        {
            bool g1=(checkVal(2,it.second)&&checkVal(3,it.second)&&checkVal(4,it.second)&&checkVal(5,it.second));
            bool g2=(checkVal(4,it.second)&&checkVal(5,it.second)&&checkVal(6,it.second)&&checkVal(7,it.second));
            bool g3=(checkVal(6,it.second)&&checkVal(7,it.second)&&checkVal(8,it.second)&&checkVal(9,it.second));

            if (g1&&g3)
            {
                answer+=2;
            }
            else if (g1||g2||g3)
            {answer++;
            }
            
            
            
        }
        return answer;
        
        
    }
};