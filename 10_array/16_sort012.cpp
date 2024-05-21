// sort the array of 0 ,1 and 2 without using sort functoin
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//first approach
// void sort012(int *arr, int n)
// {
//     int c0 = 0, c1 = 0, c2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             c0++;
//         if (arr[i] == 1)
//             c1++;
//         if (arr[i] == 2)
//             c2++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i >= 0 && i < c0)
//             arr[i] = 0;
//         else if (i >= c0 && i < c0 + c1)
//             arr[i] = 1;
//         else
//         {
//             arr[i] = 2;
//         }
//     }
// }
void sort012(int *arr, int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}
//DNf(Dutch National Flag ) Algo.
int main()
{
    int arr[] = {2, 1, 0, 2, 2, 2, 1, 1, 0, 0, 0};
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort012(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}