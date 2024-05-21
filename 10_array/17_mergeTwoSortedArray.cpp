//merge two sorted array
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m-1;
        int j=n-1;
        int c=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[c--]=nums1[i--];
            }
            else{
                nums1[c--]=nums2[j--];
            }
        }
        while(i>=0 ){
            
                nums1[c--]=nums1[i--];
           
          
        }
        while(j>=0){
          
                nums1[c--]=nums2[j--];
            
        }
        
    }
int main(){
vector<int>arr1{1,2,3,4,5,0,0,0,0};
vector<int>arr2{3,4,5,6};
merge(arr1,5,arr2,4);
for(auto i :arr1){
    cout<<i<<" ";
}

    
     return 0;
}