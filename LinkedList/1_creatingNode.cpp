// to create Node using class
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructing constructer
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// creating single ll
// insert at tail
void insertAtTail(Node *&tail, int data)
{
    Node *node = new Node(data);
    tail->next = node;
    tail = node;
}
// insert at head
void insertAtHead(Node *&head, int data)
{
    Node *node = new Node(data);

    node->next = head;
    head = node;
}
void insertAtPosition(Node *&head, int position, int data)
{
    int count = 1;
    Node *temp = head;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node * newNode= new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 10);
    print(head);
    insertAtTail(tail, 25);
    print(head);
    insertAtTail(tail, 50);
    print(head);
    insertAtHead(head, 69);

    print(head);
    insertAtHead(head, 96);

    print(head);
    insertAtPosition(head,3,100);
    print(head);

    return 0;
}