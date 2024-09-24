/*A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship 
with packages on the conveyor belt (in the order given by weights). We may not load more weight

 than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor
 belt being shipped within days days.ram*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool isValid(vector<int>arr,int mid,int days){
    int count =0;
    int temp=mid;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(temp>=arr[i]){
            temp=temp-arr[i]; 
        }
        else{
            count++;
            temp=mid;
            temp=temp-arr[i]; 

        }   
    }
    count++; //it will for the last value (DRY  un to get better visualization)
    if(count>days){
        return false;
    }
    return true;
}
int minCapaacityTosheep(vector<int>arr,int days){
    int n=arr.size();
    int s=INT_MIN; //assighn s to the largest value of the array
    int ans=-1;
    int e=0; //assign  end to the sum of the array
    for(int i=0;i<n;i++){
        
            s=max(s,arr[i]);
        
        e=e+arr[i];
    }
    //apply binary search on the answer
    int mid=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(isValid(arr,mid,days)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days=5;
    int minDays=minCapaacityTosheep(weights,days);
    cout<<minDays<<endl;
     return 0;
}