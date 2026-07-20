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
#define node ListNode*
#define null NULL


    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL){
            return head;
        }
        node last=head;
        int n=1;

        while(last->next!=null){
            last=last->next;
            n++;

        }
        k=k%n;
         if(k==0){
            return head;
            }
        node t=head;


        for(int i=1; i<n-k;i++){
            t=t->next;
            
        }

      
        node res=t->next;


        t->next=null;
        last->next=head;
        return res;
        
    }
};