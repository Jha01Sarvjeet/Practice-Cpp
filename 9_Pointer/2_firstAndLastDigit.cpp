// to print first and last digit of a number using pointer
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void firstAndLastDigit(int *n,int *firstDigit,int *lastDigit)
{
    int temp = *n;
    *lastDigit=temp%10;
    while (temp > 9)
    {
        temp = temp / 10;
    }
    *firstDigit=temp;
    return;
}
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    int firstDigit,lastDigit;
    firstAndLastDigit(&a,&firstDigit,&lastDigit);
    cout<<"first digit is "<<firstDigit<<endl;
    cout<<"last digit is "<<lastDigit<<endl;


    return 0;
}