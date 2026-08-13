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
TreeNode* ans=NULL;
void fun(TreeNode* root, int data){
    if(root==NULL){

        return;
    }

    if(root->val == data){
        ans=root;
    }
    if(data>root->val){
        fun(root->right, data);

    }else{
        fun(root->left, data);
    }
}
    TreeNode* searchBST(TreeNode* root, int val) {
        
        fun(root, val);
        return ans;
        
    }
};