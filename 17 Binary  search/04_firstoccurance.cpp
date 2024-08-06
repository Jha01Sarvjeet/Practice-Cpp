//to find the position of first occurance of the number
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
// iterative approach
int firstOccurance(int *arr,int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==target)return i;
    }
    return -1;
}
int main(){
int arr[]={1,2,3,3,3,4,5,6,7};
cout<<firstOccurance(arr,3,8);
    
     return 0;
}