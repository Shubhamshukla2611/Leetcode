/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
TreeNode* fun(vector<int>& res, int low, int high){
    if(low>high){
        return NULL;
    }

    int mid=(low+high)/2;

    TreeNode* root=new TreeNode(res[mid]);
    root->left=fun(res,low,mid-1);
    root->right=fun(res,mid+1,high);

    return root;
}
    TreeNode* sortedListToBST(ListNode* head) {

        vector<int>res;

        while(head!=NULL){
            res.push_back(head->val);
            head=head->next;
        }

        return fun(res,0,res.size()-1);
        
    }
};