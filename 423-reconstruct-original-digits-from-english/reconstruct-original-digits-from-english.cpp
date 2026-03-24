class Solution {
public:

    
    string originalDigits(string st) {
        vector<int> arr(26,0);
        string result="";
        for (int i = 0; i < st.size(); i++)
        {
            arr[st[i]-'a']++;
        }

        while (arr['z'-'a']!=0)
        {
            arr['z'-'a']--;
            arr['e'-'a']--;
            arr['r'-'a']--;
            arr['o'-'a']--;
            result.push_back('0');
        }
        while (arr['w'-'a']!=0)
        {
            arr['t'-'a']--;
            arr['w'-'a']--;
            arr['o'-'a']--;
            result.push_back('2');
        }

        while (arr['u'-'a']!=0)
        {
            arr['f'-'a']--;
            arr['r'-'a']--;
            arr['o'-'a']--;
            arr['u'-'a']--;
            result.push_back('4');
        }
        while (arr['x'-'a']!=0)
        {
            arr['x'-'a']--;
            arr['i'-'a']--;
            arr['s'-'a']--;
            result.push_back('6');
        }
        while (arr['g'-'a']!=0)
        {
            arr['i'-'a']--;
            arr['g'-'a']--;
            arr['h'-'a']--;
            arr['e'-'a']--;
            arr['t'-'a']--;
            result.push_back('8');
        }
        while (arr['o'-'a']!=0)
        {
            arr['o'-'a']--;
            arr['n'-'a']--;
            arr['e'-'a']--;
            result.push_back('1');
        }
        while (arr['r'-'a']!=0)
        {
            arr['t'-'a']--;
            arr['r'-'a']--;
            arr['h'-'a']--;
            arr['e'-'a']=arr['e'-'a']-2;
            result.push_back('3');
        }
        while (arr['f'-'a']!=0)
        {
            arr['i'-'a']--;
            arr['f'-'a']--;
            arr['v'-'a']--;
            arr['e'-'a']--;
            result.push_back('5');
        }
        while (arr['v'-'a']!=0)
        {
            arr['s'-'a']--;
            arr['v'-'a']--;
            arr['n'-'a']--;
            arr['e'-'a']=arr['e'-'a']-2;
            result.push_back('7');
        }
        while (arr['n'-'a']!=0)
        {
            arr['i'-'a']--;
            arr['e'-'a']--;
            arr['n'-'a']=arr['n'-'a']-2;
            result.push_back('9');
        }
        sort(result.begin(),result.end());
    return result;
    }
};