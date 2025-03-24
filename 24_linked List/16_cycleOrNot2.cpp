#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//142
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
    Node *head;
    Node *tail;
    int size;
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
    void valueAtIdx(int idx)
    {
        int count = 1;
        if (size < count)
        {
            cout << "element  LL" << endl;
            return;
        }
        else if (idx > size)
        {
            cout << "index out of range , Invalid Index!!" << endl;
            return;
        }

        Node *temp = head;
        while (count < idx)
        {
            count++;
            temp = temp->next;
        }
        cout << "value at " << idx << " index is : " << temp->value << endl;
    }
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "empty ll " << endl;
            return;
        }
        else
        {
            head = head->next;
            size--;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "empty ll " << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtIndex(int idx)
    {
        if (size <= 0 || idx > size)
        {
            cout << "invalid index  " << endl;
            return;
        }
        else if (size == 1)
        {
            deleteAtHead();
        }
        else if (size == idx)
        {
            deleteAtTail();
        }
        else
        {
            Node *temp = head;
            int count = 1;
            while (count < idx - 1)
            {
                temp = temp->next;
                count++;
            }
            Node *nodeToDelete = temp->next->next;
            temp->next = nodeToDelete;
            delete nodeToDelete;
            size--;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int lenLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node *cycleOrNOt(Node *head){
    Node *slow=head;
    Node *fast=head;
    bool cycleFound=false;
    while(fast!=NULL && fast->next!=NULL){
       
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            cycleFound=true;
            break;
        }
    }
    Node *temp=head;

       if(cycleFound==true){
         while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }}
        if(cycleFound==false)return NULL;
        else{
            return slow;
        }
}

int main()
{
    LinkedList ll1;
    LinkedList ll2;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    Node *temp=ll1.tail;
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.tail->next=temp;
    Node *ans=cycleOrNOt(ll1.head);
    // ll1.display();
    cout<<"cycle point is at  "<<ans->value<<endl;
    
}