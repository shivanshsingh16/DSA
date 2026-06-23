class Solution {
public:
int fact(int n){
        int ans=1;
        for (int i = 1; i <= n; i++)
        {
            ans=ans*i;
        }
        return ans;
}
    void getper(vector<int> arr,string &ans, int fac, int k){
        if (arr.size()==1)
        {
            ans.push_back(arr[0]+'0');
            return;
        }
        int size=fac/arr.size();
        int d=k/size;
        ans.push_back(arr[d]+'0');
        arr.erase(arr.begin()+d);
        getper(arr,ans,fact(arr.size()),k%size);
        
    }
    
    string getPermutation(int n, int k) {
        vector<int> arr;
        string ans;
        int fac=1;
        for (int i = 1; i <= n; i++)
        {
            fac=fac*i;
            arr.push_back(i);
        }
        getper(arr,ans,fact(n),k-1);
        return ans;
    }
};