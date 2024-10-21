/*count Inversion*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// brute force approach

// int countinversion(vector<int>arr){
//     int n=arr.size();
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// using merge sort algorithm
int c = 0;
int inversionCount(vector<int> arr, int s, int mid, int e)
{
    int i = s;
    int j = mid + 1;
    int counti = 0;
    while (i <= mid && j <= e)
    {
        if (arr[i] > arr[j])
        {
            counti += (mid - i + 1);

            j++;
        }
        else
        {
            i++;
        }
    }
    return counti;
}

void merge(vector<int> &arr, int s, int mid, int e)
{
    vector<int> temp(e - s + 1);
    int i = s;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= e)
    {
        if (arr[i] >= arr[j])
        {
            temp[k++] = arr[j++];
        }
        else
        {
            temp[k++] = arr[i++];
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
    // copying the temperory vector into original vector
    for (int i = s, k = 0; i <= e; i++)
    {
        arr[i] = temp[k++];
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
        c = c + inversionCount(arr, s, mid, e);
        merge(arr, s, mid, e);
    }
}

int main()
{
    vector<int> arr = {5, 1, 8, 2, 3};
    cout<<"given Array"<<endl;
    for(auto i :arr)cout<<i<<" ";
    cout<<endl;
    // int inversionCount = countinversion(arr);
    // int inversionCount = mergeSort(arr,0,arr.size()-1);
    mergeSort(arr, 0, arr.size() - 1);
    cout << "number of inversion count is : " << c << endl;
}