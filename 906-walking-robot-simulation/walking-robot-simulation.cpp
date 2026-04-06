class Solution {
public:
int robotSim(vector<int> &commands, vector<vector<int>> &obstacles)
{
    unordered_set<string> obs;
    for (int i = 0; i < obstacles.size(); i++)
    {
        string s=to_string(obstacles[i][0])+"_"+to_string(obstacles[i][1]);
        obs.insert(s);
    }


    int x = 0;
    int y = 0;
    int result=0;
    int index = 0;
    vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    for (int i = 0; i < commands.size(); i++)
    {
        if (commands[i] == -1)
        {
            index++;
            index = index % 4;
        }
        else if (commands[i] == -2)
        {
            index--;
            if (index == -1)
            {
                index = 3;
            }
            index = index % 4;
        }
        else
        {
            for (int k = 0; k < commands[i]; k++)
            {
                int x1 = x + dir[index][0];
                int x2 = y + dir[index][1];
                string s=to_string(x1)+"_"+to_string(x2);
                if (obs.find(s)!=obs.end())
                {
                    break;
                }
                    x+= dir[index][0];
                    y+=dir[index][1];
                    result=max(result,(x*x)+(y*y));
            }
        }
    }
        return result;
}
};