// to print the lower bound of the number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// iterative approach
// int lowerBound(int *arr, int s, int e, int target)
// {
//     int mid = s + (e - s) / 2;

//     while (s <= e)
//     {
//         if (arr[mid] == target)
//         {

//             return arr[mid-1];
            // break;
//         }
//         else if (arr[mid] < target)
//         {

//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return arr[e];
// }

// recursive approach

int lowerBound(int *arr, int s, int e, int target, int ans)
{
    int mid = s + (e - s) / 2;
    if(s>e)return ans;
    if (arr[mid] == target)
        return arr[mid - 1];
    else if (arr[mid] < target)
    {
        ans = max(ans, arr[mid]);
        lowerBound(arr, mid + 1, e, target, ans);
    }
    else{
        lowerBound(arr, s, mid-1, target, ans);
    }
}
int main()
{
    int arr[] = {1, 5, 9, 10, 15};
    cout << lowerBound(arr, 0, 4, 10252,0);

    return 0;
}