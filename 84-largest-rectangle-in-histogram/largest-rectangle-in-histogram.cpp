class Solution {
public:
        vector<int> prevSmaller(vector<int> heights){
        vector<int> result(heights.size(),0);
        stack<int> stk;
        int i = 0;
        while (i<heights.size())
        {
            while (!stk.empty()&&heights[stk.top()]>=heights[i])
            {
                stk.pop();
            }
            if (stk.empty())
            {
                result[i]=-1;
            }
            else{
                result[i]=stk.top();
            }
            stk.push(i);
            i++;
            
        }
        
        return result;
    }
    
    vector<int> nextSmaller(vector<int> heights){
        vector<int> result(heights.size(),0);
        stack<int> stk;
        int i = result.size()-1;
        while (i>=0)
        {
            while (!stk.empty()&&heights[stk.top()]>=heights[i])
            {stk.pop();
            }
            if (stk.empty())
            {
                result[i]=heights.size();
            }
            else{
                result[i]=stk.top();
            }
            stk.push(i);
            i--;
        }
        return result;
    }



    int largestRectangleArea(vector<int>& heights) {
        vector<int> next=nextSmaller(heights);
        vector<int> prev=prevSmaller(heights);
        int result=0;
        for (int i = 0; i < heights.size(); i++)
        {
            result=max(result,(next[i]-prev[i]-1)*heights[i]);
        }
        return result;
    }
};