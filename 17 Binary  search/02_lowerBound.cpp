// to print the lower bound of the number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lowerBound(int *arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    
    while (s <= e)
    {
        if (arr[mid] == target)
        {
           
            return arr[mid-1];
        }
        else if (arr[mid] < target)
        {
            
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e - s) / 2;
    }
    return arr[e];
}
int main()
{
    int arr[]={1,5,9,10,15};
    cout<<lowerBound(arr,0,4,7);

    return 0;
}