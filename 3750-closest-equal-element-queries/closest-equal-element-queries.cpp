class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> reuslt;
        int n = nums.size();
        unordered_map<int , vector<int>> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]].push_back(i);
        }
        for (int i = 0; i < queries.size(); i++)
        {
            int el=nums[queries[i]];
            vector<int> &vec=mpp[el];
            int sz=vec.size();
            if (sz==1)
            {
                reuslt.push_back(-1);
                continue;
            }
            
            int p=lower_bound(begin(vec),end(vec),queries[i])-begin(vec);
            int res=INT_MAX;
            
            int r=vec[(p+1)%sz];
            int d=abs(queries[i]-r);
            int c=n-d;
            res=min({res,d,c});
            int l=vec[(p-1+sz)%sz];
            d=abs(queries[i]-l);
            c=n-d;
            res=min({res,d,c});
            reuslt.push_back(res);
        }
        return reuslt;
        
    }
};