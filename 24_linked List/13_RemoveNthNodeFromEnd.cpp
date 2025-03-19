#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    int size;
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next = head;
            head = temp;
            size++;
        }
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void removeNthnodeFromEnd(int n){
        int nodefromstart=size-n+1;
        Node * temp=head;
        int count=1;
        if(n==size){
            head=head->next;
            size--;
        }
        while(count<nodefromstart-1){
            temp=temp->next;
            count++;
        }
        temp->next=temp->next->next;

    }
};

int main()
{
    LinkedList ll;
    // cout << "size-->" << ll.size << endl;
    ll.insertAtHead(5);
    ll.display();
    // cout << "size-->" << ll.size << endl;
    ll.insertAtHead(1);
    ll.display();
    // cout << "size-->" << ll.size << endl;
    // ll.insertAtTail(10);
    // ll.display();
    // cout << "size-->" << ll.size << endl;
    // ll.insertAtTail(100);
    // ll.display();
    ll.removeNthnodeFromEnd(2);
    ll.display();
    
}