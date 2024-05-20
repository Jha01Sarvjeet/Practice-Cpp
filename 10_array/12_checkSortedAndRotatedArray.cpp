#include <iostream>
#include <bits/stdc++.h>
// to check that the array is sorted and rotated
using namespace std;
bool sortedRotated(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n])
        {
            count++;
        }

    }
    if(count<=1){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int arr[]={3,4,1,6,3};
    bool ans=sortedRotated(arr,5);
    if(ans)
        cout<<"sorted and rotated"<<endl;
    else{
        cout<<"not sorted "<<endl;
    }
    return 0;
}