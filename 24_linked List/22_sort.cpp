
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
    ListNode* leftMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* c= new ListNode(-1);
        ListNode* tempc=c;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val>=temp2->val){
                tempc->next=temp2;
                temp2=temp2->next;
            }
            else{
                tempc->next=temp1;
                temp1=temp1->next;
            }
            tempc=tempc->next;
        }
        if(temp1==NULL)tempc->next=temp2;
        else tempc->next=temp1;
        return c->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp=head;
        ListNode* leftM=leftMiddle(head);
        ListNode* rMidl=leftM->next;
        leftM->next=NULL;
        ListNode* leftSorted=sortList(temp);
        ListNode* rightSorted=sortList(rMidl);
        return mergeTwoLists(leftSorted,rightSorted);

    }
};