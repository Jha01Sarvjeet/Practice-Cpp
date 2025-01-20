#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{

    while (head != NULL)
    {

        cout << head->val << " ";
        head = head->next;
    }
    cout<<endl;
}
int sizeOfLL(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    // printing linked list  and counting size of Linked list
    Node *head = a;
    display(head);
    int siz = sizeOfLL(head);
    cout << "size of Linked list is " << siz << endl;
}