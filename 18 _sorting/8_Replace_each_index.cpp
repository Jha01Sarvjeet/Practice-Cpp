#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Given an array, arr[] containing ‘n’ integers, the task is to find an integer (say K) such that after
replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted array.
If no such integer exists that satisfies the above condition then return -1.
Input: arr[ ] = [10, 5, 4, 3, 2, 1]
Output: 8  */
float Max(float a, float b)
{
    return (a > b) ? a : b;
}
float Min(float a, float b)
{
    return (a < b) ? a : b;
}
int main()
{
    int arr[] = {5,2,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    float kMin = float(INT_MIN);
    float kMax = float(INT_MAX);
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        
        if (arr[i] >= arr[i + 1])
        { // kmin
            kMin = Max(kMin, (arr[i] + arr[i + 1]) / 2.0);
        }
        else
        { // kmax
            kMax = Min(kMax, (arr[i] + arr[i + 1]) / 2.0);
        }

        if (kMin > kMax)
        {   
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout << "no value of k so -1";
    else if (kMax == kMin)
    {
        if (kMin - int(kMin) == 0) // if there is only one value of k
        {
            cout << "the only one value of k " << kMin << endl;
        }
        else
        {
            cout << " -1" << endl;
        }
    }
    else
    {
        if (kMin - int(kMin) > 0)
        {
            cout << "range of k is [" << int(kMin) + 1 << "," << int(kMax) << "]" << endl;
        }
        else cout << "range of k is [" << kMin << "," << int(kMax) << "]" << endl;
    }
}