#include<bits/stdc++.h>
#include <iostream>
using namespace std;

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
    //FIrst approach tc=O(n),sc=O(n)
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* c= new ListNode(-1);
        ListNode* tempc=c;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val>=temp2->val){
                ListNode* temp= new ListNode(temp2->val);
                tempc->next=temp;
                temp2=temp2->next;
            }
            else{
                ListNode* temp= new ListNode(temp1->val);
                tempc->next=temp1;
                temp1=temp1->next;
            }
            tempc=tempc->next;
        }
        if(temp1==NULL)tempc->next=temp2;
        else tempc->next=temp1;
        return c->next;

    }
    //Second approach tc==O(n) sc=O(1)
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
};
int main(){
}
