//search in sorted and rotated array having duplicate element
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool targetSearch(int *nums,int target,int n){
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]==nums[s] && nums[mid]==nums[e]){
                s++;
                e--;
            }
            //left part is sorted
            else if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target<nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            //right part is sorted
            else{
                if(nums[mid]<=target && nums[e]>=target ){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return false;
    }
int main(){
int arr[] = {5,5,5,5,1, 3, 5};
    int target = 3;
    int ans = targetSearch(arr,target,7);
    cout << "index of terget element is " << ans << endl;
    
     return 0;
}