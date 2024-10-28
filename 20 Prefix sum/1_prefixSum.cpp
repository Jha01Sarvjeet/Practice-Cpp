/*Prefix sum*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// with extra space
//  vector<int> prefSum(vector<int>& arr)
//  {
//      vector<int> prefixArray(arr.size());
//      int n = arr.size();
//      prefixArray[0]=arr[0];
//      for (int i = 1; i < n; i++)
//      {
//          prefixArray[i] = prefixArray[i - 1] + arr[i];
//      }
//      return prefixArray;
//  }

// without extra space
vector<int> prefSum(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "original array" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    vector<int> ans = prefSum(arr);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}