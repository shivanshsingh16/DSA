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
    void NumSum(TreeNode* root, vector<int> &res, int n){
        if(root==nullptr){return;}
        if (root->left==nullptr&& root->right==nullptr)
        {
            n=n*10+root->val;
            res.push_back(n);
            n=n/10;
            return;
        }
        NumSum(root->left,res, n*10+root->val);
        NumSum(root->right,res, n*10+root->val);
    }

    int sumNumbers(TreeNode* root) {
        vector<int> ans;
        int answer=0;
        NumSum(root, ans,0);
        for (int i = 0; i < ans.size(); i++)
        {
            answer+=ans[i];
        }
        return answer;

    }
};