/*Given an integer array nums of length n where all the integers of nums
are in the range [1,n] and each integer appears once or twice, return an
array of all the integers that appears twice. You must write an algorithm
that runs in O(n) time and uses only constant extra space.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> duplicateNu(vector<int> arr)
{
    int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     while (arr[i] != arr[arr[i] - 1])
    //         swap(arr[i], arr[arr[i] - 1]);
    // }

    int i = 0;

    while (i < n)
    {
        int correctIndex = arr[i] - 1;
        if (arr[i] == arr[correctIndex] || i == correctIndex)
            i++;
        else
        {
            swap(arr[i], arr[correctIndex]);
        }
    }
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != arr[i])
            b.push_back(arr[i]);
    }
    return b;
}
int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ns = duplicateNu(arr);
    for (auto i : ns)
        cout << i << " ";
}