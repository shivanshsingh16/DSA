/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
{
    unordered_map<TreeNode *, TreeNode *> store;

    queue<TreeNode *> q;
    q.push(root);
    store.insert({root, nullptr});
    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
            store.insert({temp->left, temp});
        }
        if (temp->right)
        {
            q.push(temp->right);
            store.insert({temp->right, temp});
        }
    }
    queue<TreeNode *> q2;
    unordered_map<TreeNode*,bool> vis;
    q2.push(target);
    vis[target]=true;
    int check = 0;
    while (!q2.empty())
    {
        int x=q2.size();
        if(check==k){break;}
        for (int i = 0; i < x; i++)
        {
            TreeNode *temp = q2.front();
            q2.pop();
            if (store[temp]!=nullptr&&!vis[store[temp]])
            {
                TreeNode* t = store[temp];
                vis[store[temp]]=true;
                q2.push(t);
            }
            if (temp->left&&!vis[temp->left])
            {
                q2.push(temp->left);
                vis[temp->left]=true;
            }
            if (temp->right&&!vis[temp->right])
            {
                q2.push(temp->right);
                vis[temp->right]=true;
            }
        }
        check++;
        
    }
    vector<int> result;
    while (!q2.empty())
    {
        result.push_back(q2.front()->val);
        q2.pop();
    }
    return result;
}
};