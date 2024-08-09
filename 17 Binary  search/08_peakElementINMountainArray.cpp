//to find the peak element in Mountain array
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int peakElement(int nums[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return nums[mid];
        else if(nums[mid]>nums[mid-1]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
int a,b,c;
    int nums[]={1,5,4,0,6,9,3,2};
    int peak_value=peakElement(nums,8);
    cout<<endl;
    cout<<peak_value;
     return 0;
}