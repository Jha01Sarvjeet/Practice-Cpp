#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int SecondMaxi(int arr[], int n)
{

    
    int maxi = arr[0];
    int seconLargest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>seconLargest && arr[i]!=maxi){
            seconLargest=arr[i];
        }
    }
    return seconLargest;
    
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
    int ans = SecondMaxi(arr, n);
    cout << " Second largest elemet of array is  " << ans << endl;

    return 0;
}