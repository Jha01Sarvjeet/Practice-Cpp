#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//(push store_ans pop  & trverse forward in array)

vector<int> stockSpan(vector<int>& arr) {
        int n=arr.size();   
        vector<int> prevIndex(n);
        stack<int>st;
        prevIndex[0]=-1;
        st.push(0);
        for(int i=1;i<n;i++){
            while(st.size()>0 && arr[st.top()]<arr[i]){
                st.pop();

            }
            if(st.size()==0)prevIndex[i]=-1;
            else{
                prevIndex[i]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            prevIndex[i]=i-prevIndex[i];
        }
        return prevIndex;

    }
int main()
{
    vector<int> arr = {100,80,60,81,70,60,75,85};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans = stockSpan(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}