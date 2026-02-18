class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> arr;
        int prev=n%2;
        n=n/2;
        while (n > 0) {
        if (prev==n%2)
        {
            return false;
        }
        prev=n%2;
        n = n / 2;      
    }
    return true;
}
};