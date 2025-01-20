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
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout << a.val << " " << endl;
    cout << b.val << " " << endl;
    cout << c.val << " " << endl;
    (a.next)->val = 70;
    cout << b.val << " " << endl;
    // print value of d
    cout << (((a.next)->next)->next)->val;
}