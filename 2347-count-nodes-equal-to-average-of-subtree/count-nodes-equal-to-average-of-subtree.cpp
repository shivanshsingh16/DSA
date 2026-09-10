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
pair<int,int> func2(TreeNode *root, int *result){
    if (root==nullptr)
    {
        return {0,0};
    }
    
    auto left=func2(root->left, result);
    auto right=func2(root->right, result);
    int sum=left.first+right.first+root->val;
    int nodes=left.second+right.second+1;
    if ((int)((left.first+right.first+root->val)/(left.second+right.second+1))==root->val)
    {
        (*result)++;
    }
    return {sum, nodes};
    
}
int averageOfSubtree(TreeNode *root)
{
    int result = 0;
    func2(root, &result);
    return result;
}
};