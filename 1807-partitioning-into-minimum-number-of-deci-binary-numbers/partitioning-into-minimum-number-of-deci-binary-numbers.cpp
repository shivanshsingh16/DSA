class Solution {
public:
    int minPartitions(string n) {
        int temp=-1;
        for (int i = n.size()-1; i >=0; i--)
        {
            temp=max(n[i]-'0',temp);
            if(temp==9){break;}
        }
        return temp;
    }
};