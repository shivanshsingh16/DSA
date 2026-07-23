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
   vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
                if (root==nullptr)
        {
            return answer;
        }
        queue<TreeNode*> q;
        q.push(root);
        int zig=0;
        while (!q.empty())
        {
            int n=q.size();
            vector<int> ps;
            for (int i = 0; i < n; i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                ps.push_back(temp->val);
                if (temp->left!=nullptr)
                {
                    q.push(temp->left);
                }
                if (temp->right!=nullptr)
                {
                    q.push(temp->right);
                }
                
            }
            if (zig==0)
            {
                answer.push_back(ps);
                zig=1;
            }else{
                reverse(ps.begin(),ps.end());
                answer.push_back(ps);
                zig=0;
            }

            
            
        }
        return answer;
        
    }
};