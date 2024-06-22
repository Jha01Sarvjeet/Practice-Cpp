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
void insertAtTail(Node *&head, int data)
{
    Node *node = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}
// insert at head
void insertAtHead(Node *&head, int data)
{
    Node *node = new Node(data);
    
    node->next = head;
    head=node;
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
    print(node1);
    insertAtTail(node1, 10);
    print(node1);
    insertAtTail(node1, 25);
    print(node1);
    insertAtTail(node1, 50);
    print(node1);
    insertAtHead(node1,69);

    print(node1);
    insertAtHead(node1,96);

    print(node1);

    return 0;
}