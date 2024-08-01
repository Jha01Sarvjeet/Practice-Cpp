// Print index of a given element in an array. If not present, print -1.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find(int *arr, int n, int element, int idx)
{
    if (idx >= n)
    {
        cout << -1;
        return;
    }
    if (arr[idx] == element)
    {
        cout << idx;
        return;
    }
    find(arr,n,element,idx+1);
}
int main()
{
    int arr[]={2,3,6,5,8,9};
    find(arr,6,7,0);

    return 0;
}
