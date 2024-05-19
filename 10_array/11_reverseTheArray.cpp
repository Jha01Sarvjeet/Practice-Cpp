#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//to reverse the array
void reverseArray(int arr[] ,int n){
    //using while loop
    // int i=0;
    // int j=n-1;
    // while(i<=j){
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }
    //using for loop
    for(int i=0,j=n-1;i<=j;i++,j--){
        swap(arr[i],arr[j]);
    }

}
void display(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
display(arr,9);
reverseArray(arr,9);
display(arr,9);
    
     return 0;
}