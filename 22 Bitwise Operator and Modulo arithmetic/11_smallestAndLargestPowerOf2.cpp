/*find the largest and smallest power of two that is set in that integer.*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void smallestAndLargest(int n)
{

    int smallest = -1;
    int largest = -1;
    for (int i = 0; i < 32; i++)
    {
        if (((n >> i) & 1) == 1)
        {
            smallest = i;
            break;
        }
    }
    for (int i = 31; i >= 0; i--)
    {
        if (((n >> i) & 1) == 1)
        {
            largest = i;
            break;
        }
    }
    cout <<"smallest power "<< smallest << endl;
    cout <<"largest power "<< largest << endl;

}   
int main()
{
    smallestAndLargest(15);
}