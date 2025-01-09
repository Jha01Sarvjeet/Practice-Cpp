#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Decimal To binary*/
// string decimalToBinari(int num)
// {
//     string str = "";
//     while (num)
//     {

//         if (num&1)
//         {
//             str = '1' + str;
//         }
//         else
//         {
//             str = '0' + str;
//         }
//         num = num >> 1;
//     }
//     return str;
// }

//Another approach
string decimalToBinari(int num)
{
    string str = "";
    while (num)
    {

        if (num%2==1)
        {
            str = '1' + str;
        }
        else
        {
            str = '0' + str;
        }
        num = num /2;
    }
    return str;
}
int main()
{
    int n;
    cout << "enter number " << endl;
    cin >> n;
    string binary = decimalToBinari(n);
    cout << binary << endl;
}