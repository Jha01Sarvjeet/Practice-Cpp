#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

 */
int pivotIndex(vector<int>& nums) {
    for(auto i :nums){

            cout<<i<< " ";
        }
        cout<<endl;
        int n=nums.size();
        vector<int>left(n+1);
        vector<int>right(n+1);
        left[0]=0;
        right[n]=0;
        for(int i=0;i<n;i++){
            left[i+1]=nums[i]+left[i];
        }
        for(auto i :left){
            cout<<i<< " ";
        }
        cout<<"\n";
        for(int i=n-1;i>=0;i--){
            right[i]=nums[i]+right[i+1];
        }
        for(auto i :right){

            cout<<i<< " ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++){
            if(left[i]==right[i+1]){
                return i;
            }
        }
        return -1;
    }
int main(){
vector<int>nums={1,7,3,6,5,6};
int ans=pivotIndex(nums);
cout<<ans<<endl;

}