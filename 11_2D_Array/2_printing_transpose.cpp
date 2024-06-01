#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//print the transpose of the matrix

int main(){
int arr[2][3]={1,2,3,4,5,6};
int trans[3][2];

for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
       trans[i][j]=arr[j][i];
    }
    
}
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
       cout<<trans[i][j]<<" ";
    }
    cout<<endl;
}
    
     return 0;
}