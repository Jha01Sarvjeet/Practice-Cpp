//to find the peak element in Mountain array
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int peakElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return arr[mid];
        else if(arr[mid]>arr[mid-1]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
int a,b,c;
    int arr[]={1,5,4,0};
    int peak_value=peakElement(arr,4);
    cout<<endl;
    cout<<peak_value;
     return 0;
}