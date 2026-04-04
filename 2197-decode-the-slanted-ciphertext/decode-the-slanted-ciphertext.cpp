class Solution {
public:

        string decodeCiphertext(string encodedText, int rows) {
        
        int i =0;
        string result;
        int n = encodedText.length()/rows;

        for (int i = 0; i < n; i++)
        {
            for (int j=i; j< encodedText.length(); j+=n+1)
            {
                result+=encodedText[j];
            }
            
        }
        if (result.empty())
        {
            return "";
        }
        while (!result.empty()&&result.back()==' ')
        {
            result.pop_back();
        }
        return result;
    }
};