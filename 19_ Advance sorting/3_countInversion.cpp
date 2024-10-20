/*count Inversion*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//brute force approach
int countinversion(vector<int>arr){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int>arr={5,1,8,2,3};
    int inversionCount=countinversion(arr);
    cout<<"number of count INversion : "<<inversionCount;
}