// search in sorted and rotated array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int serchInrotatedArray(int arr[], int target, int n)
{
    int s = 0;
    int e = n - 1;
   
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[s] <= arr[mid]){
            if(arr[s]<=target && target<=arr[mid]){
                e=mid-1;
            }
            else {
                s=mid+1;
            }

        }
        else{
            if(target>=arr[mid] && target<=arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

           
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5};
    int target = 5;
    int ans = serchInrotatedArray(arr, target, 3);
    cout << "index of terget element is " << ans << endl;

    return 0;
}