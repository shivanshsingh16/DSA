class Solution {
public:
    int minPartitions(string n) {
        int temp=-1;
        for (int i = 0; i < n.size(); i++)
        {
            temp=max(n[i]-'0',temp);
        }
        return temp;
    }
};