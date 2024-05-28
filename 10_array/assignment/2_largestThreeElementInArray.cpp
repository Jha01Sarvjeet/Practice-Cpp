//WAP to find the largest three elements in the array.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
vector<int> largestThree(int *arr,int n){
    sort(arr,arr+n);
    vector<int>ans;
    ans.push_back(arr[n-1]);
    ans.push_back(arr[n-2]);
    ans.push_back(arr[n-3]);
    return ans;
}

int main(){
int arr[]={1,2,3,5,7,9,9,7,69,4,65,4,56,4};
vector<int>ans=largestThree(arr,14);
cout<<"largest three element are"<<endl;
for(auto i : ans){
    cout<<i<<" ";
}
    
     return 0;
}