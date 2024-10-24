/*to find the Kth Smallest element in the Array using Quick search*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int partition(vector<int> &arr, int s, int e, int k)
{
    int pivtIndex = -1;
   
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= arr[s])
        {
            count++;
        }
    }
    pivtIndex = s + count;
    swap(arr[s],arr[pivtIndex]);
    int i = s;
    int j = e;
    while (i < pivtIndex && j > pivtIndex)
    {
        if (arr[i] > arr[pivtIndex] && arr[j] < arr[pivtIndex])
            swap(arr[i], arr[j]);
        else if (arr[i] <= arr[pivtIndex])
            i++;
       else if (arr[j] >= arr[pivtIndex])
            j--;
    }
    return pivtIndex;
}
int kThSmallestElement(vector<int> &arr, int s, int e, int k)
{
    while (true)
    {
        int idx = partition(arr, s, e, k);
        if (idx == k - 1)
        {
            return arr[idx];
            break;
        }
        else if (idx < k - 1)
        {
            s=idx+1;
        }
        else
        {
           e=idx-1;
        }
    }
}
int main()
{
    vector<int> arr = {5, 4,4, 3, 2, 1};
    int k;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    cout << "enter k " << endl;
    cin >> k;
    int ans = kThSmallestElement(arr, 0, arr.size() - 1, k);
    cout << k << " xsmallest Element is " << ans << endl;
}