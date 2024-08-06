//find smallest missing number in give sorted array of distinct element
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//iterative approach
// int missingNumber(int *arr,int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]!=i)return i;
//     }
// }

//BInary search approach
int missingNumber(int *arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]!=mid){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>mid){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
int arr[]={0,2,5,6,9,10};
cout<<"smallest missing number is "<<missingNumber(arr,6)<<endl;
    
     return 0;
}