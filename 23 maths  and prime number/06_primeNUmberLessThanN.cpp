/*Given an integer n, return the number of prime numbers that are strictly less than n
204*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int countPrimes(int n){
    if(n<=2)return 0;
    vector<int>sieve(n,1);
    sieve[0]=0;
    sieve[1]=0;
    //upating sieve
    for(int i=2;i<n;i++){
        int j=i+i;
        while(j<n){
            sieve[j]=0;
            j=j+i;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(sieve[i]==1)count++;

    }
    return count;

}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int result=countPrimes(n);
    cout<<"total prime less than number "<<result<<endl;
}