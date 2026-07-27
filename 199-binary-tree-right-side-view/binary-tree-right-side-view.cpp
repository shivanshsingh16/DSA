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

    void check(vector<int> &ans, TreeNode* root, int level){
        if (root==nullptr)
        {
            return;
        }
        if (level==ans.size())
        {
            ans.push_back(root->val);
        }
        check(ans, root->right,level+1);
        check(ans, root->left,level+1);
        
    }



    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root==nullptr)
        {
            return ans;
        }
        
        int val=0;
        check(ans,root,val);
        return ans;
    }
};