class Solution {
public:
    int minPartitions(string n) {
        int temp=n[0]-'0';
        for (int i =1; i <n.size(); i++)
        {
            temp=max(n[i]-'0',temp);
            if(temp==9){break;}
        }
        return temp;
    }
};