#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int n){
        if(idx==4){
            cout<<"stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx]=n;
    }
    void pop(){
        if(idx<0){
            cout<<"stack is empty"<<endl;
        }
        idx--;
    }
    int top(){
        if(idx<0){
            cout<<"soprry stack is empty!"<<endl;
        }
        return arr[idx];
    }
    bool isEmpty(){
        if(idx<0)return true;
        else return false;
    }
    int size(){
        return idx+1;
    }
    void display(){
        for (int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.display();
    cout<<"top: "<<st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
    cout<<"empty or not "<<st.isEmpty()<<endl;
    st.push(20);
    st.pop();
    st.display();
    

}