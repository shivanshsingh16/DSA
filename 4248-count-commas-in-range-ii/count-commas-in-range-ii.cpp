class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        long long lower=1000;
        long long upper;
        int comma=1;
        while (lower<=n)
        {
            upper=lower*1000-1;
            if (upper>n)
            { 
                upper=n;
            }
            count+=(upper-lower+1)*comma;
            comma++;
            lower=lower*1000;
            
        }
        return count;
    }
};