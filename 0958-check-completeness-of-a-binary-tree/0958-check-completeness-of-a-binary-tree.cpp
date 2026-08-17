class Solution {
public:

    bool isCompleteTree(TreeNode* root) {

        queue<TreeNode*> q;
        bool cbt = true;

        q.push(root);

        while(!q.empty()) {

            int lvlorder = q.size();
            vector<int> temp;

            while(lvlorder--) {

                TreeNode* t = q.front();
                q.pop();

                // NULL mila
                if(t == NULL) {
                    cbt = false;
                    continue;
                }

                // NULL ke baad real node
                if(cbt == false) {
                    return false;
                }

                temp.push_back(t->val);

                if(t->left != NULL) {
                    q.push(t->left);
                }
                else {
                    q.push(NULL);
                }

                if(t->right != NULL) {
                    q.push(t->right);
                }
                else {
                    q.push(NULL);
                }
            }
        }

        return true;
    }
};