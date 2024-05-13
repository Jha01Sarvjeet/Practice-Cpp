#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int LSearch(int arr[], int search, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {    return i;
        // break;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter number of element" << endl;
    cin >> n;
    int arr[n];
    cout << "enter searching element" << endl;
    int search;
    cin >> search;
    cout << "enter element in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = sizeof(arr) / sizeof(arr[0]);

    int ans = LSearch(arr, search, s);
    if (ans == -1)
        cout << "element not found" << endl;
    else
    {
        cout << "element  found at  " << ans << "  index" << endl;
    }

    return 0;
}