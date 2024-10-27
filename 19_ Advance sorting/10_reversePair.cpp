/*Given an integer array nums, return the number of reverse pairs in the array.

A reverse pair is a pair (i, j) where:

0 <= i < j < nums.length and
nums[i] > 2 * nums[j].*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//Brute Force approach

int reversePair(vector<int> arr)
{
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > 2 * arr[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int>arr={2,4,3,5,1};
    int revPairCount=reversePair(arr);
    cout<<"Total reverse pair count :- "<<revPairCount<<endl;
}