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
void fun(TreeNode* root, int sum, int targetSum,vector<int>& temp,vector<vector<int>>& res){
    if(root==NULL){
        return;
    }
    sum+=root->val;
    temp.push_back(root->val);
    if(root->left==NULL && root->right==NULL){
        if(sum==targetSum){
            res.push_back(temp);
            temp.pop_back();
            return;
        }

    }

    fun(root->left,sum,targetSum,temp,res);
    fun(root->right,sum,targetSum,temp,res);

    temp.pop_back();

    return;
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<int> temp;
        vector<vector<int>> res;

        fun(root,sum,targetSum,temp,res);
        return res;
        
    }
};