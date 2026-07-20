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
    int dia=0;
    
    int diameterOfBinaryTree(TreeNode* root) {

        for_dia(root);
        return dia;
    }

    int for_dia(TreeNode* root){
                if (root==nullptr)
        {
            return 0;
        }
        int l=for_dia(root->left);
        int r=for_dia(root->right);
        dia=max(dia,l+r);
        return max(l,r)+1;

    }
};