/*143 You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.*/
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
    ListNode* reverse(ListNode* head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*nxt=head;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
         ListNode *right=reverse(slow->next);

        slow->next=NULL;
      
         ListNode* tempc=new ListNode(100);
         ListNode* tempa=head;
         ListNode* tempb=right;

         while(tempa!=NULL && tempb!=NULL){
            tempc->next=tempa;
            tempa=tempa->next;
            tempc=tempc->next;
             tempc->next=tempb;
               tempb=tempb->next;
              tempc=tempc->next;
         }
         tempc->next=tempa;
         
         

       
    }
};