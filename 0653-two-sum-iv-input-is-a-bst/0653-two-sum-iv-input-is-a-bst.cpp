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

stack<TreeNode* > stk;
vector<int>res;

    bool findTarget(TreeNode* root, int k) {
        if(root==NULL){
            return false;
        }
        TreeNode* t=root;
        while(t){
            stk.push(t);
            t=t->left;
        }
        while(!stk.empty()){
            TreeNode*leftchild=stk.top();
            stk.pop();
            res.push_back(leftchild->val);    
        
        TreeNode* rightchild=leftchild->right;
        while(rightchild){
            stk.push(rightchild);
            rightchild=rightchild->left;
        }
        }
        int n=res.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(res[i]+res[j]==k){
                return true;
            }
            else if(res[i]+res[j]>k){
                j=j-1;

            }
            else if(res[i]+res[j]<k){
                i=i+1;
            }
        
        }return false;

        
    }
};