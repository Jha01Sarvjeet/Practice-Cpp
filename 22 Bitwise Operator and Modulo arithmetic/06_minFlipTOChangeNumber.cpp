#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*Min number of bit flips to convert one number to another
5->>0101 to 11-->1011 total 3 bits to be fliped*/
int minFlipToConvert(int x ,int y){
    //x to y
    return __builtin_popcount(x^y);

}
int main(){
    int x,y;
    //x to y
    cout<<"enter x and y"<<endl;
    cin>>x;
    cin>>y;
    int noOfFlips=minFlipToConvert(x,y);
    cout<<"no of flips "<<noOfFlips<<endl;
}