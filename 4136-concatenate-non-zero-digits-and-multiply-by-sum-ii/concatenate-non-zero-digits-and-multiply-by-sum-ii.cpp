class Solution {
public:
vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int M=1e9+7;
        typedef long long ll;
        vector<ll> preSum(s.size());
        vector<int> nonZero(s.size(),0);
        vector<ll> nums(s.size());
        vector<int>result(queries.size());
        ll sum=0,non=0;
        ll n=0;

        vector<ll> pow10(s.size());
        pow10[0]=1;
        for (int i = 1; i < s.size(); i++)
        {
            pow10[i]=(pow10[i-1]*10)%M;
        }
        for (int i = 0; i < s.size(); i++)
        {
            sum= (sum+(s[i]-'0'))%M;
            preSum[i]=sum;
            if (s[i]!='0')
            {
                non++;
                nonZero[i]=non;
                n=(n*10+(s[i]-'0'))%M;
                nums[i]=n;
            }
            else{
                nonZero[i]=non;
                nums[i]=n;
            }
        }
        for (int i = 0; i < queries.size() ;i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            ll sum;
            ll num;
            if (l==0)
            {
                sum=preSum[r];
                num=nums[r];
            }
            else{
                sum=((preSum[r]-preSum[l-1])%M+M)%M;
                num=((nums[r]-nums[l-1]*pow10[nonZero[r]-nonZero[l-1]])%M+M)%M;
            }
            result[i]=(sum*num%M);
            
        }
        return result;
        
}
};