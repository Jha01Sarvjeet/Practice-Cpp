#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void print(int x,int y){    //positional  argument
//     cout<<x<<" "<<y<<endl;
// }

//in caser of default argument if all argument are default then no issue
//otherwise pass the default value to the right of the positional argument otherwise it will through error
void print(int x,int y,int z=45){    //positional  argument
    cout<<x<<" "<<y<<" "<<z<<endl;
}
int main()
{
    int a=5;
    int b=10;
    // print(a,b);
    print(a,b,12);
    return 0;
}