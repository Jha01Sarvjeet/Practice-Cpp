/*Given an integer array nums, return an array answer such that answer[i] is equal to the
product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
Input: nums = [1,2,3,4]
Output: [24,12,8,6]*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> multiple(vector<int> arr)
{
    int n = arr.size();
    int mul1 = 1;
    int mul2 = 1;
    int zeroCount = 0;
    for (auto i : arr)
        if (i == 0)
            zeroCount++;
    if (zeroCount > 1)
    {
        for (int i = 0; i < n; i++)
            arr[i] = 0;
        return arr;
    }
    else if (zeroCount == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                mul2 = mul2 * arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                arr[i] = 0;
            else
            {
                arr[i] =mul2;
            }
        }
        return arr;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            mul1 = mul1 * arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = mul1/arr[i];
        }
        return arr;
    }
}
int main()
{
    vector<int> arr = {-1,1,0,-3,3};
    vector<int> result = multiple(arr);
    cout<<"Array :- "<<endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
   
    for (auto i : result)
        cout << i << " ";
    cout << endl;
   


    return 0;
}