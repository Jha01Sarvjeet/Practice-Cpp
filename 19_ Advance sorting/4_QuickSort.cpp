/*Quick Sort*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &arr, int s, int e)
{
    int pivIndex = 0;
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= arr[s])
            count++;
    }
    pivIndex = count + s;
    swap(arr[s], arr[pivIndex]);
    int i = s;
    int j = e;
    while (i < pivIndex && j > pivIndex)
    {
        if (arr[i] > arr[pivIndex] && arr[j] < arr[pivIndex])
        {
            swap(arr[i++], arr[j--]);
        }
        else if (arr[i] <= arr[pivIndex])
            i++;
        else if (arr[j] >= arr[pivIndex])
            j--;
    }
    return pivIndex;
}
void quickSort(vector<int> &arr, int s, int e)
{
    if (s>=e)
        return;
    int pivot = pivotIndex(arr, s, e);
    quickSort(arr, s, pivot - 1);
    quickSort(arr, pivot + 1, e);
}
int main()
{
    vector<int> arr = {5,5,1,2,2,1,2,2,1,2};
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    quickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
        cout <<i << " ";
    cout << endl;

    return 0;
}