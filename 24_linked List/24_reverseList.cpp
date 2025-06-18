
//  Definition for singly-linked list.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
// first approach
    // ListNode *nodeATIndex(ListNode *head, int n)
    // {
    //     ListNode *temp = head;
    //     for (int i = 0; i < n; i++)
    //     {
    //         temp = temp->next;
    //     }
    //     return temp;
    // }
    // ListNode *reverseList(ListNode *head)
    // {
    //     ListNode *temp = head;
    //     int n = 0;
    //     while (temp != NULL)
    //     {
    //         n++;
    //         temp = temp->next;
    //     }
    //     int i = 0;
    //     int j = n - 1;
    //     while (i <= j)
    //     {
    //         ListNode *left = nodeATIndex(head, i);
    //         ListNode *right = nodeATIndex(head, j);
    //         int temp = left->val;
    //         left->val = right->val;
    //         right->val = temp;
    //         i++;
    //         j--;
    //     }
    //     return head;
    // }

    //second approach
      ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
       ListNode* prev=NULL;
       ListNode* curr=head;
       ListNode* nxt;
       while(curr->next!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;


       }
       curr->next=prev;
       return curr;
    }

};

int main()
{
}
