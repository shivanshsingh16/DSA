class Solution {
public:
    int mirrorDistance(int n) {
        int k=n;int r=0;
        while(k!=0){
            r=r*10+k%10;k=k/10;
        }
        return abs(r-n);
    }
};