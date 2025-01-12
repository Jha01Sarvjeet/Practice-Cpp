/*Given an integer n, find the minimum number to be added to change it to a power of two. (Try using
bitmasking)*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int noToAdd(int n)
{
    if ((n & (n - 1)) == 0)
    {
        return 0;
    }
    else
    {
        int p = 0;
        int temp = n;
        while (temp > 0)
        {
            temp /= 2;
            p++;
        }
        int nearestNumber = 1 << p;
        return nearestNumber - n;
    }
}
int main()
{
    int n;
    cout << "enter number " << endl;
    cin >> n;
    int num=noToAdd(n);
    cout<<"number to add to make power of 2 : "<<num<<endl;
}