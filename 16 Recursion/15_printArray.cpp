//to print array element
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void printArray(int *arr,int i,int n){
    if(i==n)return;
    cout<<arr[i]<<" ";
    printArray(arr,i+1,n);
}
int main(){
int arr[]={1,2,3,4,5,6};
printArray(arr,0,5);
     return 0;
}