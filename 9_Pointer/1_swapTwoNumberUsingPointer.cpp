#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void swapNumber(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
int a,b;
cout<<"enter two number"<<endl;
cin>>a;
cin>>b;
cout<<"before swaping"<<endl;
cout<<a<<" "<<b<<endl;
swapNumber(&a,&b);
cout<<"after swaping"<<endl;
cout<<a<<" "<<b<<endl;
    
     return 0;
}