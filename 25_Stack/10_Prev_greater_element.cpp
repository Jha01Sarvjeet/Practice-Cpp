#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// The prev greater element of some element x in an array is the first greater
// element that is to the left of x in the same array.



//(push store_ans pop  & trverse forward in array)

vector<int> prevGreaterElement(vector<int>& arr) {
        int n=arr.size();   
        vector<int> prevGreater(n);
        stack<int>st;
        prevGreater[0]=-1;
        st.push(arr[0]);
        for(int i=1;i<n;i++){
            while(st.size()>0 && st.top()<arr[i]){
                st.pop();

            }
            if(st.size()==0)prevGreater[i]=-1;
            else{
                prevGreater[i]=st.top();
            }
            st.push(arr[i]);
        }
        return prevGreater;

    }
int main()
{
    vector<int> arr = {3,1,2,7,4,6,2,3};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans = prevGreaterElement(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}