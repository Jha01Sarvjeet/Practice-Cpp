// to print first and last digit of a number using pointer
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void firstAndLastDigit(int *n)
{
    int temp = *n;
    cout << "last digit of number is " << temp % 10 << endl;
    while (temp > 9)
    {
        temp = temp / 10;
    }
    cout << "first digit of number is " << temp << endl;
}
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    firstAndLastDigit(&a);


    return 0;
}