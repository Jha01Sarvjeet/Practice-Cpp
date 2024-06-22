// to create Node using class
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    //constructing constructer
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};

int main()
{
    Node *node1 = new Node(5);
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}