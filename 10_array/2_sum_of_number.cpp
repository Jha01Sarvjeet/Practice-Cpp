#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int sumOfNumber(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int main(){
int arr[]={2,34,5,6,8,9,7};
int size=sizeof(arr)/sizeof(arr[0]);
int ans=sumOfNumber(arr,size);
cout<<"sum of all element of array is "<<ans<<endl;
    
     return 0;
}