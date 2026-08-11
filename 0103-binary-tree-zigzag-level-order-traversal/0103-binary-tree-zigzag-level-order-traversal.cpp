class Solution {
public:

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> res;

        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return res;
        }

        bool lefttoright = true;

        while(!q.empty()){

            int lvlsize = q.size();
            vector<int> temp;

            while(lvlsize--){

                TreeNode* t = q.front();
                q.pop();

                temp.push_back(t->val);

                if(t->left != NULL){
                    q.push(t->left);
                }

                if(t->right != NULL){
                    q.push(t->right);
                }
            }

            if(lefttoright == false){
                reverse(temp.begin(), temp.end());
            }

            res.push_back(temp);

            lefttoright = 1 - lefttoright;
        }

        return res;
    }
};