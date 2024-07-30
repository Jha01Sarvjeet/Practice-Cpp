//to print from N To 1
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void print1toN(int n){
    if(n<1)return;
    cout<<n<<endl;
    print1toN(n-1);
    
}
int main(){
    int n=5;
    print1toN(n);
    
     return 0;
}