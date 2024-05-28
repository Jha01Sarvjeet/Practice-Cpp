//To  Count the number of elements strictly greater than x.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int strictlyGreaterThanX(int *arr,int x,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)>x)
            count++;
    }
    return count;
}
int main(){
int arr[]={2,5,3,6,9,7,7,5,6,8};
int x=3;
int count=strictlyGreaterThanX(arr,x,10);
cout<<"the number of elements strictly greater than  " <<x <<" is "<<count<<endl;
    
     return 0;
}