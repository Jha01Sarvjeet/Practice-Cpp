#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//print the transpose of the matrix

int main(){
int arr[2][3]={1,2,3,4,5,6};
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
    
     return 0;
}