/*Given an array of digits (values are from 0 to 9), the task is to find the minimum
 possible sum of two numbers formed from digits of the array. Please note that all digits
  of the given array must be used to form the two numbers.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int minimumSum(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a = a * 10 + arr[i];
        }
        else
        {
            b = b * 10 + arr[i];
        }
    }

    return (a + b);
}
int main()
{
    int arr[] = {6, 8, 4, 5, 3};
    int minSum = minimumSum(arr, 5);
    cout << "minimum sum of the two number formed  : " << minSum << endl;
}