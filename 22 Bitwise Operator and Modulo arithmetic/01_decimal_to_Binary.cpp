#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*to convert a binary string into Decimal Integer*/
int binaryToDecimal(string &str){
    int n=str.length();
    int result=0;
    int temp=1;
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        int num=ch-'0';
        result+=temp*num;
        temp*=2;

    }
    return result;
}
int main(){
    string str;
    cout<<"enter the binary  number"<<endl;
    cin>>str;
    int decimal=binaryToDecimal(str);
    cout<<"decimal value of "<<str<<" is "<<decimal<<endl;
}