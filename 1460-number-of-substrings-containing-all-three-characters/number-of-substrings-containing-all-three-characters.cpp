class Solution {
public:
        int numberOfSubstrings(string s) {
        int arr[3]={-1,-1,-1};int cnt=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='a')
            {
                arr[0]=i;
            }
            else if(s[i]=='b') {
                arr[1]=i;
            }
            else{
                arr[2]=i;
            }
            if (arr[0]!=-1&&arr[1]!=-1&&arr[2]!=-1)
            {                
                cnt+=*min_element(arr,arr+3)+1;
            }
            
        }
        return cnt;
        
    }
};