class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* left = head;
        ListNode* prevleft = NULL;
        ListNode* res = head->next;

        while(left != NULL && left->next != NULL){

            ListNode* right = left->next;
            ListNode* nextleft = right->next;

            // swap
            right->next = left;
            left->next = nextleft;

            // connect previous pair
            if(prevleft != NULL){
                prevleft->next = right;
            }

            prevleft = left;
            left = nextleft;
        }

        return res;
    }
};