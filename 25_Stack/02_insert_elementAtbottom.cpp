#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//first approach
// void  insertAtBottom(stack<int>&st,int n){
//     stack<int>ft;
   
//     while(!st.empty()){
//         ft.push(st.top());
//         st.pop();
//     }
//     st.push(n);
//      while(!ft.empty()){
//         st.push(ft.top());
//         ft.pop();
//     }

// }

//recursive approach
void  insertAtBottom(stack<int>&st,int n){
    if (st.empty()){
        st.push(n);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtBottom(st,n);
    st.push(temp);

}
void display(stack<int> &st)
{
    if (st.empty())
        return;
    int temp = st.top();
    cout << temp << " ";
    st.pop();
    display(st);
    st.push(temp);
}
int main(){
        stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    display(st);
    cout<<endl;
    insertAtBottom(st,-10);
    display(st);
}