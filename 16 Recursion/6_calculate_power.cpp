//to print a^b eg 2^3=8
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int power(int base,int pow){
    if(pow==0){
        return 1;
    }
    return (base*power(base,pow-1));
}
int main(){
int base,pow;
cout<<"enter base ,power"<<endl;
cin>>base;
cin>>pow;
cout<<power(base,pow)<<endl;
    
     return 0;
}