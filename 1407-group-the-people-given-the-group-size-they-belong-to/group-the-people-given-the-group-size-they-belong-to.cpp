class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        for (int i = 1; i <=*max_element(groupSizes.begin(),groupSizes.end()); i++)
        {
            vector<int> p={};
            for (int j=0; j<groupSizes.size(); j++)
            {
                if (groupSizes[j]==i)
                {
                    p.push_back(j);
                }
                if (p.size()==i)
                {
                    result.push_back(p);
                    p={};
                }
            }
            
        }
        return result;   
}
};