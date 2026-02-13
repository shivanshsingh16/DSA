class Solution {
public:
    long func(long num , bool tell){
        long result=num;
        if (tell==true)
        {
            while (num>0)
            {
                result=result*10+num%10;
                num=num/10;
            }
        }
        else{
            result=result/10;
             while (num>0)
            {
                result=result*10+num%10;
                num=num/10;
            }
        }
        return result;
    }

    string nearestPalindromic(string n) {
        vector<long> answers;
        long num=stol(n);
        int l=n.size();
        int midLength;
        if (l%2==0)
        {
            midLength=n.size()/2;
        }
        else{
            midLength=(n.size()/2)+1;
        }
        
        answers.push_back( func(stol(n.substr(0,midLength)),l%2==0));
        
        answers.push_back( func(stol(n.substr(0,midLength))-1,l%2==0));
        
        answers.push_back( func(stol(n.substr(0,midLength))+1,l%2==0));
        answers.push_back((long) pow(10,n.size())+1);
        answers.push_back((long) pow(10,n.size()-1)-1);
        long diff=INT64_MAX;
        int index=-1;
        for (int i = 0; i < answers.size(); i++)
        {
            if (num-answers[i]==0)
            {
                
            }
            else{
                if (abs(answers[i]-num)<diff)
                {
                    index=i;
                    diff=abs(answers[i]-num);
                }
                else if (abs(answers[i]-num)==diff){
                    index= answers[i]<answers[index]?i:index;
                }

                
            }
            
        }
        return to_string(answers[index]);
        
    }
};