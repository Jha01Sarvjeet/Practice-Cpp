/*Given an integer array nums, return the number of reverse pairs in the array.

A reverse pair is a pair (i, j) where:

0 <= i < j < nums.length and
nums[i] > 2 * nums[j].*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Brute Force approach

// int reversePair(vector<int> arr)
// {
//     int count = 0;
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > 2 * arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// optimal approach
int c = 0;
int countRevPair(vector<int> &arr, int s, int mid, int e)
{
    int count = 0;
    int j = mid + 1; // Initialize j outside the loop

    for (int i = s; i <= mid; i++)
    // {   int j = mid + 1;
    // Move j forward only if condition is met
    {
        while (j <= e && arr[i] > 2 * arr[j])
        {
            j++;
        }
        // Count valid j's for the current i
        count += (j - (mid + 1)); // Count valid pairs
    }
    return count;
}

void merge(vector<int> &arr, int s, int mid, int e)
{
    int n = e - s + 1;
    vector<int> temp(n);
    int i = s;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {                         // Correct condition for merging
            temp[k++] = arr[i++]; // Store the smaller element
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[s + i] = temp[i];
    }
}
int reversePair(vector<int> &arr, int s, int e)
{
    int count = 0;
    int n = arr.size();
    if (s >= e)
        return count;

    int mid = s + (e - s) / 2;
    count+=reversePair(arr, s, mid);
    count+=reversePair(arr, mid + 1, e);
    count+=countRevPair(arr, s, mid, e);
    merge(arr, s, mid, e);

    return count;
}
int main()
{
    vector<int> arr = {2, 4, 3, 5, 1};
    int revPairCount = reversePair(arr, 0, arr.size() - 1);
    cout << "Total reverse pair count :- " << revPairCount << endl;
}