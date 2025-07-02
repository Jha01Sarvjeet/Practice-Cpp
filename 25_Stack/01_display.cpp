#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// //without recursion
// void display(stack<int>&st){
//        stack<int>gt;
//        while(!st.empty()){
//         cout<<st.top()<<" ";
//         gt.push(st.top());
//         st.pop();
//        }
//        cout<<endl;
//        while(!gt.empty()){

//         st.push(gt.top());
//         gt.pop();
//        }

// }

// using recursion
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
int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    display(st);
   
}