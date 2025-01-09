#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*Number of set bit in a number*/
int noOfSet(int n){
    int count=0;
    while(n){
        if(n&1)count++;
        n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int setBitCount=noOfSet(n);
    cout<<"number of set Bit "<<setBitCount<<endl;

}