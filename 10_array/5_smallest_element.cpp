#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Smallest(int arr[], int n)
{

    
    int small = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
    }
    return small;
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
    int ans = Smallest(arr, n);
    cout << "Smallest elemet of array is" << ans << endl;

    return 0;
}