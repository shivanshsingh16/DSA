class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;
        vector<int> s1;
        for (int i = 0; i < boxes.size(); i++)
        {
            if (boxes[i]=='1')
            {
                s1.push_back(i);
            }
            
        }

        for (int i = 0; i < boxes.size(); i++)
        {
            int p=0;
            for (int j = 0; j < s1.size(); j++)
            {
                p=p+abs(i-s1[j]);
            }
            result.push_back(p);
        }
        return result;
        
    }
};