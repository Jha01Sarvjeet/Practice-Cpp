//Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int reverseNUmber(int n,int reversed){
    if(n==0)return reversed;

    reversed=reversed*10+(n%10);
    n=n/10;
    reverseNUmber(n,reversed);
}
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
cout<<"entered number is "<<n<<endl;
int rev=reverseNUmber(n,0);
cout<<"entered number is "<<rev<<endl;



    
     return 0;
}