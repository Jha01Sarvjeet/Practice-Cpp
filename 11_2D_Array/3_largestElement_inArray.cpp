#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//print the maximum element of  matrix

int main(){
int arr[2][3]={1,2,3,4,5,6};
int maxi=arr[0][0];

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
       maxi=max(maxi,arr[i][j]);
    }
    
}
cout<<"Largest element of array is "<<maxi<<endl;
    
     return 0;
}