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
void intersectionOfLL(Node *head1, Node *head2)
{
    int size1 = lenLL(head1);
    int size2 = lenLL(head2);
    if (size1 > size2)
    {
        int diff = size1 - size2;
        while (diff > 0)
        {
            head1 = head1->next;
            diff--;
        }
        Node *temp = head1;
        while (temp != NULL)
        {
            if (head1 == head2)
            {
                cout << head1->value << endl;
                break;
            }
            else
            {
                temp = temp->next;
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        if (temp == NULL)
        {
            cout << "No intersection";
        }
    }

else
{
    int diff = size2 - size1;
    while (diff > 0)
    {
        head2 = head2->next;
        diff--;
    }
    Node *temp = head1;
    while (temp != NULL)
    {
        if (head1 == head2)
        {
            cout << head1->value << endl;
            break;
        }
        else
        {
            temp = temp->next;
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    if (temp == NULL)
    {
        cout << "No intersection";
    }
}}

int main()
{
    LinkedList ll1;
    LinkedList ll2;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll2.insertAtTail(1);
    ll2.insertAtTail(3);
    ll2.insertAtTail(4);
    ll2.tail->next = ll1.tail; // forming intersection point
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.display();
    ll2.display();
    intersectionOfLL(ll1.head, ll2.head);
}