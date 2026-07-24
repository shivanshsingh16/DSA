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
    void sumPath(vector<vector<int>> &answer, vector<int> &arr, int targetSum, int sum,TreeNode* root){

        if (root->left==nullptr&& root->right==nullptr)
        {
            if (sum==targetSum)
            {
                answer.push_back(arr);
            }
            return;
        }
        if (root->left)
        {
            arr.push_back(root->left->val);
            sum+=root->left->val;
            sumPath(answer,arr, targetSum,sum, root->left);
            arr.pop_back();
            sum-=root->left->val;
        }
        if (root->right)
        { 
            arr.push_back(root->right->val);
            sum+=root->right->val;
            sumPath(answer,arr, targetSum,sum, root->right);
            arr.pop_back();
            sum-=root->right->val;
        }
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> answer;        
        if (root==nullptr)
        {
            return answer;
        }
        vector<int> arr;
        arr.push_back(root->val);
        sumPath(answer, arr, targetSum, root->val, root);
        return answer;
    }
};