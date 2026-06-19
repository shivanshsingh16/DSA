class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int x=0;
        int ans=0;
        for(int i =0;i<gain.size();i++){
            ans=max(ans,x);
            x=x+gain[i];
        }
        ans=max(ans,x);
        return ans;
    }
};