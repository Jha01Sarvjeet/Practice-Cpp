#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//to add two matrices and save the result in one of the given matrices.
int main(){
int arr1[3][3];
int arr2[3][3];
//taking input in first array
cout<<"enter element in  first array"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr1[i][j];
    }
}
//taking input in second array
cout<<"enter element in  second array"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr2[i][j];
    }
}
//adding both matrix iand storing in one array
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr1[i][j]=arr1[i][j]+arr2[i][j];
    }
}
//printing summation array
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}
    
     return 0;
}