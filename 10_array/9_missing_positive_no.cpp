#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
/* to find the smallest missing positive element in the sorted Array that contains only positive
elements.*/
int missing_number(int arr[],int n){
    int x=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            return x;
            flag=true;
            break;
        }
        else{
            x++;
        }
    }
    return -1;
}
int main(){
int arr[]={0,1,3,4,5,6};
int ans=missing_number(arr,6);
if(ans==-1){
    cout<<"no missing number"<<endl;
}
else{
    cout<<"missing number is "<<ans<<endl;
}
    
     return 0;
}