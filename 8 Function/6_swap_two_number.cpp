#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b)
{
    // firstv method
    // int temp = a;
    // a = b;
    // b = temp;

    //second method

    // a=a+b;
    // b=a-b;
    // a=a-b;

    //third method
    a=a^b;
    b=a^b;
    a=a^b;


}
int main()
{
    int a, b;
    cout << "enter two number" << endl;
    cin >> a ;
    cin>>b;    
    cout << "before swapping " << a << " and " << b << endl;
    Swap(a, b);
    cout << "after swapping " << a << " and " << b << endl;

    return 0;
}