//  Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
int n;
cout<<"enter no of rows/column"<<endl;
cin>>n;
int arr[n][n]={0};
int left=0;
int right=n-1;
int top=0;
int bottom=n-1;
int count=0;
while((left<=right) && (top<=bottom)){
    //left to right
    for( int i=left;i<=right && count<=n*n;i++){
            arr[top][i]=++count;
    }
    top++;
    //top to bottom
    for(int i=top;i<=bottom && count<n*n;i++){
        arr[i][right]=++count;
    }
    right--;
    //right to left
     for(int i=right;i>=left && count<n*n;i--){
        arr[bottom][i]=++count;
    }
    bottom--;
    //bottom to top
     for(int i=bottom;i>=top && count<n*n;i--){
        arr[i][left]=++count;
    }
    left++;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    
}

    
     return 0;
}



