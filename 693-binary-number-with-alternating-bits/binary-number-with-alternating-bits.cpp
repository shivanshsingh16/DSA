class Solution {
public:

    bool hasAlternatingBits(int n) {
        vector<int> arr;
        while (n > 0) {
            arr.push_back(n%2) ; 
        n = n / 2;      
    }
    for (int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            return false;
        } 
    }
    return true;
    
    }
};