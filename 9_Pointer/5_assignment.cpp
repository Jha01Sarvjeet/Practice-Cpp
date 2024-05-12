#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void multiply(int *a,int *b,int *mul){
    int ans=*a* *b;
    *mul=ans;
    return;
}
int main(){
    int a,c;
    cout<<"enter two number"<<endl;
    cin>>a;
    cin>>c;
    int mul;
    multiply(&a,&c,&mul);
    cout<<"multipl of "<<a<<" and "<<c <<" is "<<mul<<endl;
    
     return 0;
}