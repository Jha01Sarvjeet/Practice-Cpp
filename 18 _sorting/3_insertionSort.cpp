//insertion sort
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void insertionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int t=i;
        while(t>0 &&( arr[t]<arr[t-1])){
            swap(arr[t],arr[t-1]);
            t--;
        }

    }
}
int main(){
     vector<int>arr={5,4,3,2,1};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    insertionSort(arr);
    
     for(int i:arr){
        cout<<i<<" ";
    }
}