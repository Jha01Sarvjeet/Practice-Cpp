//to print maximum element from array
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
// void maxOfArray(int *arr,int i,int n,int maxi){
//     if(i==n)cout<<"max :-"<<maxi<<endl;
//     else{
//         maxi=max(arr[i],maxi);
//         maxOfArray(arr,i+1,n,maxi);
//     }
// }


int  maxOfArray(int *arr,int i,int n){
    if(i==n)return INT_MIN;
    else{
        return max(arr[i],maxOfArray(arr,i+1,n));
    }
}
int main(){
int arr[]={1,2,3,4,5,6};
int maxi=maxOfArray(arr,0,5);
cout<<"maximum elment in array is "<<maxi<<endl;
     return 0;
}