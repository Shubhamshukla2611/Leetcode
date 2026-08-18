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
bool ans=true;
TreeNode* prev=NULL;
bool fun(TreeNode* root,vector<int>& res){
    if(root==NULL){
        return true;
    }

    fun(root->left,res);
    if(prev==NULL){
        prev=root;
        ans=true;

    }else{
        if(prev->val >= root->val){
            ans=false;
            prev=root;
        
        
        }
        prev=root;
    }

    fun(root->right,res);
    return ans;



}

  
    bool isValidBST(TreeNode* root) {
        vector<int> res;

        fun(root,res);
        return ans;
        
    }
};