#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*flip all bits*/
int flipBits(int n){
    int temp=n;
   temp=temp|(temp>>1);
   temp=temp|(temp>>2);
   temp=temp|(temp>>4);
   temp=temp|(temp>>8);
   temp=temp|(temp>>16);
    return (n^temp);
}
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int flipped=flipBits(n);
    cout<<"flipped number is "<<flipped<<endl;
}
