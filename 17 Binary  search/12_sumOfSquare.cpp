// to return that this number s square of sum of two number

// iterative approach
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// tc is not good
//1)first way 

bool isperfectsquare(int n){
    if(sqrt(n)*sqrt(n)==n)return true;
    return false;
}
// bool judgeSquareSum(int c)
// {
//     int x = 0;
//     int y = c;

//     while (x<=y){
//         if(isperfectsquare(x) && isperfectsquare(y))return true;
//         x++;
//         y--;
//     }
//     return false;

// }

//2)second way
bool judgeSquareSum(int c){
    int a=0;
    int b=c;
    while(a<=b){
        if(isperfectsquare(a) && isperfectsquare(b)){
            return true;
        }
        else if (!isperfectsquare(b)){
            b=(sqrt(b))*(sqrt(b));
            a=c-b;
           
        }
        else{
             a=(sqrt(a)+1)*(sqrt(a)+1);
            b=c-a;
        }
    }
    return false;
}

//better approach
// bool judgeSquareSum(int c){
//     int x=0;
//     int y=sqrt(c);
//     while(x<=y){
//         if(x*x+y*y==c )return true;
//         else if(x*x+y*y<c)
//             x++;
//         else y--;
//     }
//     return false;
// }

int main(){
    cout<<judgeSquareSum(3);
}