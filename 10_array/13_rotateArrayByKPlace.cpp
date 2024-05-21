#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void reverse(int *arr,int s,int n){
    int i=s;
    int j=n;
    if(i>j)
        return;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }

}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int k=3;
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
int n=9;
cout<<endl;
reverse(arr,0,n-k-1);//reversing first n-k element
reverse(arr,n-k,n-1);//reversing last k element
reverse(arr,0,n-1);//reversing entire array
for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
}
    
     return 0;
}