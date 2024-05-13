#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Maxi(int arr[], int n)
{

    
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
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
    int ans = Maxi(arr, n);
    cout << "Maximum elemet of array is" << ans << endl;

    return 0;
}