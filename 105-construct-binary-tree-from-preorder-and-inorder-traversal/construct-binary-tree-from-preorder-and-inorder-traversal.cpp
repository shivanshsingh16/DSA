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
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        map<int,int> mpp;
        for (int i = 0; i < inorder.size(); i++)
            {mpp[inorder[i]]=i;
        }

        TreeNode* root=builder(preorder, 0 , preorder.size()-1, inorder,0, inorder.size()-1,mpp);
        return root;
    }

    TreeNode* builder(vector<int> &preOrder, int preStart, int preEnd, 
        vector<int> &inOrder, int inStart, int inEnd, map<int,int> &mpp){
            
                        if (preStart>preEnd|| inStart>inEnd)
                        {
                            return nullptr;
                        }
                TreeNode* root=new TreeNode(preOrder[preStart]);
            int real=mpp[root->val];
            int numsleft=real-inStart;

            root->left=builder(preOrder,preStart+1,preStart+numsleft,inOrder,inStart,real-1,mpp);
            root->right=builder(preOrder,preStart+numsleft+1,preEnd, inOrder, real+1,inEnd,mpp);

            return root;
            
        }
};