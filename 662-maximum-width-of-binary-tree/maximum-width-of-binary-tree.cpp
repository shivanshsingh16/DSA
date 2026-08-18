/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int widthOfBinaryTree(TreeNode *root){
    if (root== nullptr){
        return 0;
    }
    queue<pair<TreeNode* , int>> q;
    q.push({root,1}); 
    int result=-1;
    while (!q.empty())
    {
        unsigned long long min_val=q.front().second;
        unsigned long long mini=ULLONG_MAX;
        unsigned long long maxi=0;
        int n = q.size();
        for (int  i = 0; i < n; i++)  
        {
            auto temp=q.front();
            q.pop();
            unsigned long long cur = temp.second - min_val;
            mini=min(mini,cur);
            maxi=max(maxi,cur );
            if (temp.first->left)
            {
                q.push({temp.first->left,2*cur});
            }
            if (temp.first->right)
            {
                q.push({temp.first->right,2*cur+1});
            }
            
        }
        result=max(result,(int)(maxi-mini+1));
    }
    return result;
    
}

};