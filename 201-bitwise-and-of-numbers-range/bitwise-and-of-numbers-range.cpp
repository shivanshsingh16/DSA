class Solution {
public:

    int rangeBitwiseAnd(int left, int right) {
long long p=left;
long long q=right;long long cnt=0;
while (p!=q)
{
    p=p>>1;q=q>>1;cnt++;
}
return p<<cnt;

    }
};