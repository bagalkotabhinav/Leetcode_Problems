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
    void inorder (TreeNode* root,vector<int> &intrav){
        if(root==NULL)
            return;
        inorder(root->left,intrav);
        intrav.push_back(root->val);
        inorder(root->right,intrav);
    }

    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;

        vector<int> intrav;
        inorder(root,intrav);
        
        for(int i=0;i<intrav.size()-1;i++){
            if(intrav[i]>=intrav[i+1]){
                return false;
            }
        }
        return true;
    }
};
