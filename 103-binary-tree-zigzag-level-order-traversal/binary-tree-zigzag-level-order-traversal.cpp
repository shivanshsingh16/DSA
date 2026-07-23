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
        deque<TreeNode*> dq;
        bool rev=false;
        dq.push_back(root);
        while(!dq.empty()){
            int n = dq.size();
            vector<int> ps;
            for (int i = 0; i < n; i++)
            {
            TreeNode* temp = dq.front();
            dq.pop_front();
            ps.push_back(temp->val);
            if (temp->left)  dq.push_back(temp->left);
            if (temp->right) dq.push_back(temp->right);
                }
                
            
            if (rev) reverse(ps.begin(), ps.end());
            rev=!rev;
            answer.push_back(ps);
            
        }
        return answer;
    }
};