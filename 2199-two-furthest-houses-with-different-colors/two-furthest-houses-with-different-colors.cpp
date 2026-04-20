class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i =0;int j =colors.size()-1;
        int result=0;
        while (i<j)
        {
            if (colors[i]==colors[j])
            {
                i++;
            }
            else{
                result=max(result,j-i);
                j--;
            }
        }
        i =0;j =colors.size()-1;
        while (i<j)
        {
            if (colors[i]==colors[j])
            {
                j--;
            }
            else{
                result=max(result,j-i);
               i++;
            }
        }
        return result;
    }
};