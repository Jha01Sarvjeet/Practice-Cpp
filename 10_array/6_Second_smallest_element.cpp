#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int SecondSmallest(int arr[], int n)
{

    
    int mini = arr[0];
    int secondSmallest=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] <secondSmallest && arr[i]!=mini){
            secondSmallest=arr[i];
        }
    }
    return secondSmallest;
    
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
    int ans = SecondSmallest(arr, n);
    cout << " Second smallest elemet of array is  " << ans << endl;

    return 0;
}