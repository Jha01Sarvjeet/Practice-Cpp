//to  check that the number is power of 2
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool checkPowerOf2(int n){
    if(n==0)return false;
    if(n==1)return true;
    else if(n%2==0)checkPowerOf2(n/2);
    else{
        return false;
    }

}
int main(){
int n;
cout<<"enter number to check"<<endl;
cin>>n;
if(checkPowerOf2(n))cout<<"number is power of 2"<<endl;
else cout<<"number is not power by 2"<<endl;
    
     return 0;
}