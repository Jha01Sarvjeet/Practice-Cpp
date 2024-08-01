//Print all the elements of an array in reverse order.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void printReverseArray(int *arr ,int idx ){
    if(idx<0)return;
    cout<<arr[idx]<<" ";
    printReverseArray(arr,idx-1);

}
int main(){
int arr[]={1,2,3,4,5};
printReverseArray(arr,4);
    
     return 0;
}