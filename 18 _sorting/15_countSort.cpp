/*Counting Sort is a non-comparison-based sorting algorithm. It is particularly efficient 
when the range of input values is small compared to the number of elements to be sorted.*/
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void countSort(vector<int>&arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(auto i : arr){
        maxi=max(maxi,i);
    }
    
    vector<int>countTrack(maxi+1);
    for(auto i :arr){
        countTrack[i]++;
    }
     
    vector<int>result(n);
    int j=0;
    for(int i=0;i<=maxi;i++){
        if(countTrack[i]!=0){
            result[j++]=i;
            countTrack[i--]--;
        }
       
    }

    arr=result;
}
int main(){

        vector<int>arr={4,5,2,3,8,0,7,9,6,1};
        for(auto i :arr){
            cout<<i<<" ";
        }
        cout<<endl;
        countSort(arr);
        for(auto i :arr){
            cout<<i<<" ";
        }
     return 0;
}