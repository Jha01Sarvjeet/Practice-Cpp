//find smallest missing number in give sorted array of distinct element
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//iterative approach
int missingNumber(int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=i)return i;
    }
}
int main(){
int arr[]={0,1,2,5,6,9,10};
cout<<"smallest missing number is "<<missingNumber(arr,7)<<endl;
    
     return 0;
}