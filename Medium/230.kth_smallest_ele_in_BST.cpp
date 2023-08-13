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
    void inorder(TreeNode* root, int k, int* count, int* ans){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(root==NULL)
            return ;
        inorder(root->left,k,count,ans);
        (*count)=(*count)+1;
        if(*count==k){
            *ans=root->val;
            return;
        }
        inorder(root->right,k,count,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> sort;
        int ans,count=0;
        inorder(root,k,&count,&ans);
        return(ans);
    }
};
