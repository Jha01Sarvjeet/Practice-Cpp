// to print sum of all odd number betwen a and b both inclusive
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sumOfOdd(int a, int b, int sum)
{
    if (a > b)
        return sum;
    if (a & 1)
        return sumOfOdd(a + 2, b, sum + a);
    else
    {
        a = a + 1;
        return sumOfOdd(a + 2, b, sum + a);
    }
}
int main()
{
    int a, b;
    cout << "enter and b" << endl;
    cin >> a;
    cin >> b;
    int result=sumOfOdd(a, b, 0);
    cout<<"sum of all odd number between "<<a<<" and "<<b<< " is "<<result<<endl;

    return 0;
}