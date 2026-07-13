class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> qu;
        for (int i = 1; i <=8; i++)
        {
            qu.push(i);
        }
        vector<int> result;
        while (qu.size())
        {
            int x=qu.front();
            qu.pop();
            int z=x%10;
            if (z==9)
            {
                continue;
            }
            x=(x*10)+(z+1);
            if (x<=high)
            {
                if (x>=low)
                {
                    result.push_back(x);
                }
                qu.push(x); 
                
            }
            
        }
        return result;
    }
};