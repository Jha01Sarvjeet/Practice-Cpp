
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* a=new ListNode(-1);
        ListNode* tempa=a;
        ListNode* b=new ListNode(-1);
         ListNode* tempb=b;
        ListNode* temp=head;
        while(temp){
            ListNode* c=new ListNode(temp->val);
            if(temp->val<x){
                
                tempa->next=c;
                tempa=tempa->next;

            }
            else{
                
                tempb->next=c;
                tempb=tempb->next;
            }
            temp=temp->next;
        }
        tempa->next=b->next;
        tempb->next=NULL;
        return a->next;

    }
};