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
int countNodes(TreeNode* root) {
        if (root==nullptr)
        {
            return 0;
        }
        
        int lh=left(root);
        int rh=right(root);
        if (lh==rh)
        {
            return pow(2,lh)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }

    int right(TreeNode* root){
        int h=0;
        TreeNode* root1=root;
        while (root1)
        {
            h++;root1=root1->right;
        }
        return h;
    }
        int left(TreeNode* root){
        int h=0;
        TreeNode* root1=root;
        while (root1)
        {
            h++;root1=root1->left;
        }
        return h;
    }
};