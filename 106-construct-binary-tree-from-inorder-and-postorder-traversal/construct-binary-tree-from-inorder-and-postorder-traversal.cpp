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
TreeNode* buildTree(vector<int>& inorder,vector<int>& postorder) {
                if (inorder.size()!=postorder.size())
        {
            return nullptr;
        }
        
        unordered_map<int,int> mpp;
        for (int i = 0; i < inorder.size(); i++)
            {mpp[inorder[i]]=i;
        }

        TreeNode* root=builder(postorder, 0 , postorder.size()-1, inorder,0, inorder.size()-1,mpp);
        return root;
    }


    TreeNode* builder(vector<int> &postorder, int ps,int pe,vector<int> &inorder, int is, int ie,unordered_map<int,int> &mpp){
        if (is>ie||ps>pe)
        {
            return nullptr;
        }
        TreeNode* root=new TreeNode(postorder[pe]);
        int inRoot=mpp[root->val];
        int numsLeft=inRoot-is;

        root->left=builder(postorder,ps,ps+numsLeft-1,inorder,is,inRoot-1 ,mpp);
        root->right=builder(postorder,ps+numsLeft,pe-1,inorder,inRoot+1,ie,mpp);



        return root;
    }
};