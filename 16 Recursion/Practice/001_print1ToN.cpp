//to print from 1 To N
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void print1toN(int n){
    if(n<1)return;
    print1toN(n-1);
    cout<<n<<endl;
}
int main(){
    int n=5;
    print1toN(n);
    
     return 0;
}