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
    void NumSum(TreeNode* root,  int n,int *sum){
        if(root==nullptr){return;}
        if (root->left==nullptr&& root->right==nullptr)
        {
            n=n*10+root->val;
            *sum+=n;
            n=n/10;
            return;
        }
        NumSum(root->left, n*10+root->val,sum);
        NumSum(root->right, n*10+root->val,sum);
    }

    int sumNumbers(TreeNode* root) {

        int sum=0;
        NumSum(root, 0,&sum);
        return sum;

    }
};