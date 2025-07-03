#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int n)
    {
        this->value = n;
        this->next = NULL;
    }
};
class Stack
{
public:
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int n)
    {
        Node *temp = new Node(n);

        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
        }
        head = head->next;
        size--;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "sorry stack is empty!" << endl;
        }
        return head->value;
    }
    bool isEmpty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
    // int size()
    // {
    //     return size;
    // }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->value << " ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.display();
    cout << "top: " << st.top() << endl;
    cout << "size: " << st.size << endl;
    cout << "empty or not " << st.isEmpty() << endl;
    // st.push(20);
    st.pop();
    st.display();
}