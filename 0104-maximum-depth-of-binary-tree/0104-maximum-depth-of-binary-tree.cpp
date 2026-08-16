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

int fun(TreeNode* root,int  temp ){
    if(root==NULL){
        return 0;
    }

    int left=fun(root->left,temp);
    int right=fun(root->right,temp);

    temp=max(left,right);

    return temp+1;


}
    int maxDepth(TreeNode* root) {
        int temp;

       return fun(root, temp);
        



        
        
    }
};