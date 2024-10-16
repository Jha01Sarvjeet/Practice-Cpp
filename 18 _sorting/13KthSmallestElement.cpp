/*Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int kThSmallestElement(vector<int>arr,int k){
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int main(){
    vector<int>arr={8,5,6,3,0,9,7,2};
    int k;
    cout<<"enter whick smallest element you want"<<endl;
    cin>>k;
    int kThSmall=kThSmallestElement(arr,k);
    cout<<k <<"th smallest element is "<<kThSmall<<endl;
    
     return 0;
}