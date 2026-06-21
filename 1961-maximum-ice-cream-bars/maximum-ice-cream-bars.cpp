class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int mVal=*max_element(costs.begin(),costs.end());

        vector<int> count(mVal+1,0);
        for (int i = 0; i < costs.size(); i++)
        {
            count[costs[i]]++;
        }
int answer=0;
        for (int i = 0; i < count.size(); i++)
        {
            for (int j = 0; j < count[i]; j++)
            {
                if (coins-i>=0)
                {
                    coins-=i;
                    answer++;
                }
                
            }
        }

        return answer;
        
    }  
};