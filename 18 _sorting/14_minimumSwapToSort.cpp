//Minimum swap required to sort the array
/* Find the minimum operations required to sort the array in increasing order.*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int minimumSwap(int *arr,int n){
    int swap_count=0;
    vector<pair<int,int>>vec(n);
    for(int i=0;i<n;i++) vec[i]={arr[i],i};
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        if(vec[i].second==i)continue;
        else{
            swap_count++;
            swap(vec[i],vec[vec[i].second]);
            i--;
        }
    }
    return swap_count;
}
int main(){
int arr[]={4, 1, 5, 3, 2};
int n=sizeof(arr)/sizeof(arr[0]);
int minSwap=minimumSwap(arr,n);
cout<<"minimum swap required to sort the array is "<<minSwap<<endl;

    
     return 0;
}