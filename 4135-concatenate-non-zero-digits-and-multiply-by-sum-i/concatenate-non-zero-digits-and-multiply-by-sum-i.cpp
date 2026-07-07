class Solution {
public:
long long sumAndMultiply(int n)
{
    long long num = 0;
    string s = to_string(n);
    int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
        if (s[i] - '0' != 0){
            num =num*10+ (s[i] - '0');

        }
    }
    return sum * num;
}
};