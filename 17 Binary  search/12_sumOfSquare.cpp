// to return that this number s square of sum of tum number

// iterative approach
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// tc is not good
bool isperfectsquare(int n){
    if(sqrt(n)*sqrt(n)==n)return true;
    return false;
}
bool judgeSquareSum(int c)
{
    int x = 0;
    int y = c;

    while (x<=y){
        if(isperfectsquare(x) && isperfectsquare(y))return true;
        x++;
        y--;
    }
    return false;

}

int main(){
    cout<<judgeSquareSum(3);
}