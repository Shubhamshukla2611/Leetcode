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

int ans=0;
int fun(TreeNode* root, vector<int>& temp,int k){
    if(root==NULL){
        return 0;
    }
    fun(root->left,temp,k);
    temp.push_back(root->val);
    fun(root->right,temp,k);

    for(int i=0;i<temp.size();i++){
        if(i==(k-1)){
            ans=temp[i];
        }
        
    }return ans;


}
    int kthSmallest(TreeNode* root, int k) {

        vector<int>temp;

        fun(root,temp,k);
        return ans;
        
    }
};