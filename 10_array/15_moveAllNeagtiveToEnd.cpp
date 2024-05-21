// to move all zero of array to end  such that the order of none zero element should be maintained
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//first approach (if order of non negative number should not altered)
void moveZero(int *arr, int n)
{
    if (n == 0 || n == 1)
        return;
    else
    {
        int i = -1;
        int j = 1;
        while (j < n)
        {
            if (arr[j]>0)
            {
                i++;
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}
//second approach (if order of non negative number doesn't matter)
// void moveZero(int *arr, int n)
// {
//     if (n == 0 || n == 1)
//         return;
//     else
//     {
//         int i = 0;
//         int j = n-1;
//         while (i<j)
//         {
//             if (arr[i]>=0)
//             {
//                 i++;
                
//             }
//             else if(arr[j]<0){
//                 j--;
//             }
//             else{
//                 swap(arr[i++],arr[j--]);
//             }
            
//         }
//     }
// }
int main()
{
    int arr[]={-1,-5,6,-9,8,6,9};

    for(int i=0;i<7;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
    moveZero(arr,7);
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<"  ";
    }


    return 0;
}