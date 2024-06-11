#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// to assighn  10 to all index of 5 *5 matrix
int main()
{
    int a, b, c;
    int arr[5][5];
    // initializing all index to 10

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}