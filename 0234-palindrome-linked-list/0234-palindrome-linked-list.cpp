class Solution {
public:

    bool fun(ListNode* head, vector<int>& res, int low, int high){

        // pehli baar list ko vector me convert karo
        if(head != NULL){

            while(head != NULL){
                res.push_back(head->val);
                head = head->next;
            }

            low = 0;
            high = res.size() - 1;
        }

        // palindrome checking
        if(low >= high){
            return true;
        }

        if(res[low] != res[high]){
            return false;
        }

        return fun(NULL, res, low + 1, high - 1);
    }

    bool isPalindrome(ListNode* head){

        vector<int> res;

        return fun(head, res, 0, 0);
    }
};