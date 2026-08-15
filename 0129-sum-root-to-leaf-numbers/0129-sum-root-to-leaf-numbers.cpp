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

void fun(TreeNode* root, int temp, int& sum){
    if(root==NULL){
        return;
    }
    temp=temp*10+root->val;

    if(root->left==NULL && root->right==NULL){
        sum+=temp;
        temp=0;
        return;
    }

    fun(root->left,temp,sum);
    fun(root->right, temp,sum);

    temp=0;
    return;
}
    int sumNumbers(TreeNode* root) {

        int sum=0;
        int temp;

        fun(root, 0,sum);
        return sum;
        
    }
};