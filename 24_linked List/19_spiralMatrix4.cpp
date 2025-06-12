#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// 2326

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
 vector<vector<int>> spiralMatrix(int m, int n, Node* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
    Node *temp=head;
    int count=0;
    int minc=0;
    int minr=0;
    int maxc=n-1;
    int maxr=m-1;
    while(minc<=maxc && minr<=maxr){
        //right
        for(int j=minc;j<=maxc;j++){
            if(temp==NULL)return ans;
            ans[minr][j]=temp->value;
            temp=temp->next;
        }
        minr++;
        if(minc>maxc && minr>maxr)break;

        //down
        for(int j=minr;j<=maxr;j++){
            if(temp==NULL)return ans;
            ans[j][maxc]=temp->value;
             temp=temp->next;
        }
        maxc--;
        if(minc>maxc && minr>maxr)break;

        //left
        for(int j=maxc;j>=minc;j--){
            if(temp==NULL)return ans;
            ans[maxr][j]=temp->value;
             temp=temp->next;
        }
        maxr--;
        if(minc>maxc && minr>maxr)break;

        //up
        for(int j=maxr;j>=minr;j--){
            if(temp==NULL)return ans;
            ans[j][minc]=temp->value;
             temp=temp->next;
        }
        minc++;
        if(minc>maxc && minr>maxr)break;
    }
    return ans;
    

}

int main()
{
    LinkedList ll;
    
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    
}