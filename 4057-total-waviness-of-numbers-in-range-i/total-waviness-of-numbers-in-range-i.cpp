class Solution {
public:
    bool compare(int n1,int n2,int n3){
        if (n1<n2&&n3<n2)
        {
            return true;
        }
        if (n1>n2&&n3>n2)
        {
            return true;
        }
        return false;
    }

    int tell(int num){
        return num%10;
    }
    int hello(int num){int answer=0;
        int n1=-1;int n2=-1;int n3=-1;
        while (num!=0)
        {
            int x=tell(num);
            if (n1==-1&&n2==-1&&n3==-1)
            {
                n3=x;
            }
            else if (n1==-1&&n2==-1&&n3!=-1)
            {n2=x;
            }
            else if (n2!=-1&&n1==-1)
            {
                n1=x;
                if (compare(n1,n2,n3))
                {
                    answer++;
                }
            }
            else{
                n3=n2;
                n2=n1;
                n1=x;
                if (compare(n1,n2,n3))
                {
                    answer++;
                }
            }
            num=num/10;
        }
        return answer;
    }
    int totalWaviness(int num1, int num2) {
        int result=0;
        for (int i = num1; i <=num2; i++)
        {
            if(i<100){continue;}
            result+=hello(i);
        }
        return result;
    }
};