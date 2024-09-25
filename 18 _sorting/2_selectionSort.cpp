//Selection sort
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void selectionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int mini=i;//let i is minimum value
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);

    }
}
int main(){
    vector<int>arr={5,4,3,2,1};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    selectionSort(arr);
    
     for(int i:arr){
        cout<<i<<" ";
    }
}