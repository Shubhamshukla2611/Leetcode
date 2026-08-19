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
int galti=0;
TreeNode* prev=NULL;

TreeNode* g1first=NULL;
TreeNode* g1second=NULL;
TreeNode* g2first=NULL;
TreeNode* g2second=NULL;

void fun(TreeNode* root, vector<int>& res){
    if(root==NULL){
        return;
    }
    fun(root->left, res);

    if(prev==NULL){
        prev=root;
    }
    if(root->val<prev->val){
        galti++;
        if(galti==1){
            g1first=prev;
            g1second=root;
        }else{
            g2first=prev;
            g2second=root;
        }
    }
    prev=root;
    fun(root->right,res);
    return;
}
    void recoverTree(TreeNode* root) {
        vector<int> res;
        fun(root,res);
        if(galti==1){
            swap(g1first->val,g1second->val);
        }else{
            swap(g1first->val,g2second->val);
        }
        return;
         
        
    }
};