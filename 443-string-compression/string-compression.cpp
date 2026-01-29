class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int j=0;
        int cnt=0;
        while (j<chars.size())
        {
            char curr=chars[j];
            while(j<chars.size()&&curr==chars[j])
            {
                j++;
                cnt++;
            }
            chars[index]=curr;
            index++;
            if (cnt>1)
            {
                string num=to_string(cnt);
                int r=0;
                while (r<num.size())
                {
                    chars[index]=num[r];
                    index++;
                    r++;
                }
            }
            cnt=0;
        }
    return index;   
    }
};