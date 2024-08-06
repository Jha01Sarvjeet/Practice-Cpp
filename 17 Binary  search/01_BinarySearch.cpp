//to implement the binary search
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//iterative approach

// int binarySearch(int arr[],int s,int e,int target){
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==target)return mid;
//         else if(arr[mid]>target)e=mid-1;
//         else s=mid+1;
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }

//recursive approach

int binarySearch(int arr[],int s,int e,int target){
    int mid=s+(e-s)/2;
    if(s>e)return -1;
    if(arr[mid]==target)return mid;
    else if(arr[mid]>target)
        return binarySearch(arr,s,mid-1,target);
    else{
        return binarySearch(arr,mid+1,e,target);
    }
}
int main(){
int arr[]={1,2,3,5,6,9,11};
int ans=binarySearch(arr,0,6,11);
cout<<ans<<endl;
    
     return 0;
}