//tower of hanoi
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void towerOfHanoi(int n ,char a,char b,char c){
    if(n==0)return;
    towerOfHanoi( n-1,a,c,b); //move disk from a to b using help of c
    cout<<a<<"--> "<<c<<endl;
    towerOfHanoi( n-1,b,a,c); //move  disk from b to c using help of a


}
int main(){
int n;
cout<<"enter number of disk "<<endl;
cin>>n;
towerOfHanoi(n,'A','B','C');
    
     return 0;
}