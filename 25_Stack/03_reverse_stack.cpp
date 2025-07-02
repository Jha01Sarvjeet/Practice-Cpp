#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// // first approach
// stack<int> reverse(stack<int> st)
// {
//     stack<int> ft;
//     stack<int> gt;
//     while (!st.empty())
//     {
//         ft.push(st.top());
//         st.pop();
//     }
//     while (!ft.empty())
//     {
//         gt.push(ft.top());
//         ft.pop();
//     }
//     while (!gt.empty())
//     {
//         st.push(gt.top());
//         gt.pop();
//     }
//     return st;
// }
// second approach
void insertAtBottom(stack<int> &st, int n)
{
    if (st.empty())
    {
        st.push(n);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st, n);
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
void reverse(stack<int> &st)
{
    if (st.empty())
        return;
    int top_element = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, top_element);
}
int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    reverse(st);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}