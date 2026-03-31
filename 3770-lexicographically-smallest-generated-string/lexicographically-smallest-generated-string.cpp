class Solution {
public:

int check(string &result,string &str2,int i, int m ){
int temp=0;
    for (int j = 0; j < m; j++)
    {
        if (result[j+i]!=str2[temp])
        {
            return 0;
        }
        temp++;
    }
    return 1;
}


string generateString(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    int N = n + m - 1;
    vector<int> allow(N,0);
    string result(N, '$');
    int i = 0;
    while (i < n)
    {
        if (str1[i] == 'T')
        {
            for (int j = 0; j < str2.size(); j++)
            {
                if (result[i + j] != '$' && result[i + j] != str2[j])
                {
                    return "";
                }
                result[i + j]= str2[j];
            }
        }
        i++;
    }
    for (int i = 0; i < N; i++)
    {
        if (result[i]=='$')
        {
            result[i]='a';
            allow[i]=1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str1[i]=='F')
        {
            if (check(result,str2,i,m))
            {
                bool temp=false;
                for (int k = i+m-1; k>=i; k--)
                {
                    if (allow[k]==1)
                    {
                        temp=true;
                        result[k]='b';
                        break;
                    }
                    
                }
                if (temp==false)
                {
                    return "";
                }
            }
        }
    }
    return result;
    
}
};