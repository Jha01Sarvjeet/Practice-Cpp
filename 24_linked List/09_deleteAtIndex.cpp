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
            Node *temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteAtIndex(int idx)
    {
        if (size <= 0 || idx>size)
        {
            cout << "invalid index  " << endl;
            return;
        }
        else if(size==1)
        {
           deleteAtHead();
        }
        else{
            Node *temp=head;
            int count=1;
            while(count<idx-1){
                temp=temp->next;
                count++;
            }
            Node * nodeToDelete=temp->next->next;
            temp->next=nodeToDelete;
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
    ll.insertAtTail(10);
    ll.display();
    // cout << "size-->" << ll.size << endl;
    ll.insertAtTail(100);
    ll.display();
    // cout << "size-->" << ll.size << endl;
    
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIndex(-50);
    ll.display();
    ll.deleteAtIndex(20);
    ll.display();
    ll.deleteAtIndex(20);
    ll.display();
}