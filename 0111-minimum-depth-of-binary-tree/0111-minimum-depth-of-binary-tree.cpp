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

int fun(TreeNode* root, int temp){
    if(root==NULL){
        return NULL;
    }

    int left=fun(root->left, temp);
    int right=fun(root->right, temp);

    if(root->left==NULL){
        return right+1;
    }
    if(root->right==NULL){
        return left+1;
    }

    temp=min(left,right);
    return temp+1;
}
    int minDepth(TreeNode* root) {
        int temp;

        return fun(root,temp);
        
    }
};