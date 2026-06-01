class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        reverse(cost.begin(),cost.end());
        int answer=0;int test=0;
        for (int i = 0; i <cost.size(); i++)
        {
            test+=cost[i];
            if (i%3==2)
            {
                answer+=cost[i];
            }
        }
        return test-answer;
        

    }
};