/*product of all the elements in the given array.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int multiply(int arr[], int n)
{
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul *= arr[i];
    }
    return mul;
}
int main()
{
    int n;
    cout << "enter number of element" << endl;
    cin >> n;
    int arr[n];
    cout << "enter element in array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = multiply(arr, n);
    cout << "Multiplication of all element of array is " << ans << endl;

    return 0;
}