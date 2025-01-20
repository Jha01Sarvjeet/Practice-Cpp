#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next  =NULL;
    }
};
int main()
{
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    a->next=b;          
    b->next=c;          
    c->next=d;
    //printing linked list  and counting size of Linked list
    Node *head=a;
    int count=0;
    while(head!=NULL){
        count++;
        cout<<head->val<<" ";
        head=head->next;

    }  
    cout<<endl; 
    cout<<"size of Linked list is "<<count<<endl;
    
   
    

}