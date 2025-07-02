#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Stack{
    public:
    vector<int>arr;
    
    // Stack(){
    //     idx=-1;
    // }
    void push(int n){
        arr.push_back(n);
    }
    void pop(){
        if(arr.size()==0){
            cout<<"stack is empty"<<endl;
        }
        arr.pop_back();
    }
    int top(){
        if(arr.size()==0){
            cout<<"soprry stack is empty!"<<endl;
        }
        return arr[arr.size()-1];
    }
    bool isEmpty(){
        if(arr.size()==0)return true;
        else return false;
    }
    int size(){
        return arr.size();
    }
    void display(){
        for (auto i :arr){
            cout<<i<<" ";
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
    // st.push(20);
    st.pop();
    st.display();
    

}