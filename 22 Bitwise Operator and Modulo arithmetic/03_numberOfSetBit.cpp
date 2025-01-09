#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*Number of set bit in a number*/
// int noOfSet(int n){
//     int count=0;
//     while(n){
//         if(n&1)count++;
//         n=n>>1;
//     }
//     return count;
// }

//Using built in function

// int noOfSet(int n){
//     return __builtin_popcount(n);
// }


//Brian Kernighan's Algorithm

int noOfSet(int n){
    int countSetBit=0;
    while(n){
        countSetBit++;
        n=n & (n-1);
    }
    return  countSetBit;
}

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int setBitCount=noOfSet(n);
    cout<<"number of set Bit "<<setBitCount<<endl;

}