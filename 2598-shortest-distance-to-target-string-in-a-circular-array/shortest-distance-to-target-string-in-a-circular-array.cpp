class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n= words.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                ans=min(ans,min((i-startIndex+n)%n,(n+startIndex-i)%n));
            }
        }
        if(ans==INT_MAX){return -1;}
        return ans;
    }
};