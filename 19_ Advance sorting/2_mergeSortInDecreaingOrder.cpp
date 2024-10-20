/*Merge Sort IN  Decreaing order*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// first way
 void merge(vector<int> &arr, int s, int mid, int e)
 {
     vector<int> temp(e - s + 1);
     int i = s;
     int j = mid + 1;
     int k = 0;
     while (i <= mid && j <= e)
     {
         if (arr[i] > arr[j])
         {
             temp[k++] = arr[i++];
         }
         else
         {
             temp[k++] = arr[j++];
         }
     }
     // remaining left part
     while (i <= mid)
     {
         temp[k++] = arr[i++];
     }
     // remaining right part
     while (j <= e)
     {
         temp[k++] = arr[j++];
     }
     //copying the temperory vector into original vector
     for(int i=s,k=0;i<=e;i++){
         arr[i]=temp[k++];
     }
 }
 void mergeSort(vector<int> &arr, int s, int e)
 {
     int mid = s + (e - s) / 2;
     if (s >= e)
     {
         return;
     }
     else
     {
         mergeSort(arr, s, mid);
         mergeSort(arr, mid + 1, e);
         merge(arr, s, mid, e);
     }
 }
 int main()
{
    vector<int> arr = {1,5,8,9,6,5,4,3};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    mergeSort(arr, 0, arr.size()-1);
   
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
