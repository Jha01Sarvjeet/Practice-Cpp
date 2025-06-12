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
    //approach 1
    // ListNode* mergeKLists(vector<ListNode*>& lists) {
    //     if(lists.size()==0)return NULL;
    //     int n=lists.size();
    //     while(lists.size()>1){
    //         ListNode* a=lists[lists.size()-1];
    //         lists.pop_back();
    //         ListNode* b=lists[lists.size()-1];
    //         lists.pop_back();
    //         ListNode* c=mergeTwoLists(a,b);
    //         lists.push_back(c);
    //     }
    //     return lists[0];
    // }
    //approach 2
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        int n=lists.size();
        while(lists.size()>1){
            ListNode* a=lists[0];
            lists.erase(lists.begin());
            ListNode* b=lists[0];
            lists.erase(lists.begin());
            ListNode* c=mergeTwoLists(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};