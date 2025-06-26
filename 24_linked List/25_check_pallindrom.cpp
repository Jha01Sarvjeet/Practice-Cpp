  #include<bits/stdc++.h>
  #include <iostream>
  using namespace std;
  int main(){
    //first approach
    // bool isPalindrome(ListNode* head) {
    //     stack<ListNode*>st;
    //     ListNode* temp=head;
    //     while(temp){
    //         st.push(temp);
    //         temp=temp->next;
    //     }
    //     temp=head;
    //     while(temp!=NULL){
    //         if(temp->val!=st.top()->val){
    //             return false;
    //         }
    //         st.pop();
    //         temp=temp->next;
    //     }
    //     return true;

    // }

    //optimize approach
     //second approach
    //function to return right middle node

    ListNode* right(ListNode* head){
        ListNode* slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        return slow->next;
    }

    //function to reverse the node
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=head;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;

        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* rightmiddle=right(head);
        ListNode* reverseright=reverse(rightmiddle);
       
        ListNode*left=temp;
        ListNode*right=reverseright;
        while(right!=NULL){
            if(left->val!=right->val)return false;
            left=left->next;
            right=right->next;

        }
        return true;

    }
  }
  