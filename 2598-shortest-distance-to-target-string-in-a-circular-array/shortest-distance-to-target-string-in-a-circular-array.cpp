class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n= words.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int f=(i-startIndex+n)%n;
                int b=(n+startIndex-i)%n;
                ans=min(ans,min(f,b));
            }
        }
        if(ans==INT_MAX){return -1;}
        return ans;
    }
};