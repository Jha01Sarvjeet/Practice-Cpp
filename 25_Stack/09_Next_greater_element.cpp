#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// The next greater element of some element x in an array is the first greater
// element that is to the right of x in the same array.

// brute force approach

// vector<int> nextGreaterElement(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> ans(n);
//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = -1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//         }
//     }
//     return ans;
// }

//optimal approach (push store_ans pop  & trverse array from end)

vector<int> nextGreaterElement(vector<int>& arr) {
        int n=arr.size();   
        vector<int> nextGreater(n);
        stack<int>st;
        nextGreater[n-1]=-1;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<arr[i]){
                st.pop();

            }
            if(st.size()==0)nextGreater[i]=-1;
            else{
                nextGreater[i]=st.top();
            }
            st.push(arr[i]);
        }
        return nextGreater;

    }
int main()
{
    vector<int> arr = {1, 3, 4, 2};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans = nextGreaterElement(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}