//to find the upper bound
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//iterativ approach
int upperBound(int *arr,int s,int e,int target){
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target)return arr[mid+1];
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return arr[s];

}
int main(){

    int arr[] = {1, 5, 9, 10, 15};
    cout << upperBound(arr, 0, 4, 6);

     return 0;
}