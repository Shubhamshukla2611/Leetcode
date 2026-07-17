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
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int i=1;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(i!=left){
            prev=curr;
            curr=curr->next;
            i++;
        }

        ListNode* pos = prev;
        ListNode* start=curr;
        prev=NULL;

        while(curr!=NULL && i!=right+1){
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            i++;

        }start->next=curr;
        if( pos!=NULL){
            pos->next=prev;

        }else{
            return prev;
        }return head;




    
        
    }
};