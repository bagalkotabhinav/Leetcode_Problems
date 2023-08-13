/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode NODE;
typedef struct TreeNode* NODEPTR;
NODEPTR invertTree(NODEPTR root){
    if(root==NULL || (root->left==NULL&&root->right==NULL)){
        return root;
    }
    NODEPTR lsub,rsub,temp;
    lsub=invertTree(root->left);
    rsub=invertTree(root->right);
    temp=lsub;
    root->left=rsub;
    root->right=temp;
    return root;
}
