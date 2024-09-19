#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int mySqrt(int x) {
         int a=0;
        int b=x;
        int mid=(a+b)/2;
        int temp=0;
        while(a<=b){
            if(mid*mid==x){
                temp= mid;
            }
            else if(mid*mid>x){
                b=mid-1;
            }
            else{
                temp=mid;
                a=mid+1;
            }
            mid=(a+b)/2;
        }
        return temp;
    }
int main(){
    cout<<mySqrt(4);
}