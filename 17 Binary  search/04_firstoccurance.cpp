//to find the position of first occurance of the number
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
// iterative approach
// int firstOccurance(int *arr,int target,int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target)return i;
//     }
//     return -1;
// }

//recursive solution
int firstOccurance(int *arr,int target,int s,int e,int idx ){
    int mid=s+(e-s)/2;
    if(s>e)return idx;
    else if(arr[mid]==target){
        idx=mid;
        firstOccurance( arr, target,s, mid-1, idx );
    }
    else if(arr[mid]<target){
            firstOccurance( arr, target,mid+1, e, idx );
    }
    else{
     firstOccurance( arr, target,s, mid-1, idx );
    }
    
}
int main(){
int arr[]={1,3,3,3,3,4,5,6,7};
cout<<firstOccurance(arr,7,0,8,INT_MAX);
    
     return 0;
}