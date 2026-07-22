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
    int PSum(TreeNode* root, int &maxi){
        if (root==nullptr)
        {
            return 0;
        }
        int l=PSum(root->left,maxi);
        int r=PSum(root->right,maxi);
        maxi=max(maxi,root->val+l+r);
        if ((root->val+max(l,r))<0)
        {
            return 0;

        }
        return root->val+max(l,r);
        
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        if (root->left==nullptr&&root->right==nullptr)
        {return root->val;
        }
        PSum(root,maxi);
        return maxi;
    }
};