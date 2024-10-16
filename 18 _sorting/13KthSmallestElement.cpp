/*Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// first approach
//  int kThSmallestElement(vector<int>arr,int k){
//      sort(arr.begin(),arr.end());
//      return arr[k-1];
//  }

// second approach
int partition(vector<int> &arr, int left, int right)
{
    int count = 0;
    int pvtIndx = -1;
    for (int i = left; i <= right; i++)
    {
        if (arr[i] < arr[left])
        {
            count++;
        }
    }
    pvtIndx = left+count;
    swap(arr[left], arr[pvtIndx]);
    int i = left;
    int j = right;
    while (i < pvtIndx && j > pvtIndx)
    {
        if (arr[i] > arr[pvtIndx] && arr[j] < arr[pvtIndx])
        {
            swap(arr[i++], arr[j--]);
        }
        else if (arr[i] < arr[pvtIndx])
        {
            i++;
        }
        else if (arr[j] > arr[pvtIndx])
            j--;
    }
    return pvtIndx;
}
int kThSmallestElement(vector<int>&arr, int k)
{
    int left = 0;
    int right = arr.size() - 1;
    int kthIdx = -1;

    while (true)
    {
        int idx = partition(arr, left, right);
        if (idx == k - 1)
        {
            kthIdx = idx;
            break;
        }
        else if (idx > k - 1)
        {
            right = idx - 1;
        }
        else
        {
            left = idx + 1;
        }
    }
    return arr[kthIdx];
}
int main()
{
    vector<int> arr = {8, 5, 6, 3, 0, 9, 7, 2};
    int k;
    cout << "enter whick smallest element you want" << endl;
    cin >> k;
    int kThSmall = kThSmallestElement(arr, k);
    cout << k << "th smallest element is " << kThSmall << endl;

    return 0;
}