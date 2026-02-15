class Solution {
public:

    string originalDigits(string st) {
        
        vector<string> nums={"zero","one","two","three","four","five","six","seven","eight","nine"};
        map<char,int> mpp;
        string s="";
        for (int i = 0; i < st.size(); i++)
        {
            mpp[st[i]]++;
        }
        while (mpp['z']>0)
        {
            for (int i = 0; i < nums[0].size(); i++)
            {
                mpp[nums[0][i]]--;
            }
            s.push_back('0');
        }
        while (mpp['w']>0)
        {
            for (int i = 0; i < nums[2].size(); i++)
            {
                mpp[nums[2][i]]--;
            }
            s.push_back('2');
        }
        while (mpp['u']>0)
        {
            for (int i = 0; i < nums[4].size(); i++)
            {
                mpp[nums[4][i]]--;
            }
            s.push_back('4');
        }
        while (mpp['x']>0)
        {
            for (int i = 0; i < nums[6].size(); i++)
            {
                mpp[nums[6][i]]--;
            }
            s.push_back('6');
        }
        while (mpp['g']>0)
        {
            for (int i = 0; i < nums[8].size(); i++)
            {
                mpp[nums[8][i]]--;
            }
            s.push_back('8');
        }
        while (mpp['o']>0)
        {
            for (int i = 0; i < nums[1].size(); i++)
            {
                mpp[nums[1][i]]--;
            }
            s.push_back('1');
        }
        while (mpp['r']>0)
        {
            for (int i = 0; i < nums[3].size(); i++)
            {
                mpp[nums[3][i]]--;
            }
            s.push_back('3');
        }
        while (mpp['f']>0)
        {
            for (int i = 0; i < nums[5].size(); i++)
            {
                mpp[nums[5][i]]--;
            }
            s.push_back('5');
        }
                while (mpp['v']>0)
        {
            for (int i = 0; i < nums[7].size(); i++)
            {
                mpp[nums[7][i]]--;
            }
            s.push_back('7');
        }
        while (mpp['i']>0)
        {
            for (int i = 0; i < nums[9].size(); i++)
            {
                mpp[nums[9][i]]--;
            }
            s.push_back('9');
        }
        sort(s.begin(),s.end());
        return s;
    }
};