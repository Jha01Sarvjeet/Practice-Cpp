// to pringt matrix in wavy form
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m1, m2, n1, n2;
    cout << "enter number of rows of 1st array" << endl;
    cin >> m1;
    cout << "enter number of column of 1st array" << endl;
    cin >> n1;

    int arr1[m1][n1];

    cout << "enter element in arr1" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // printing element of array in wavy form
    for (int i = 0; i < m1; i++)
    {
        if (i & 1)
        {
            for (int j = n1 - 1; j >= 0; j--)
            {
                cout << arr1[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < n1; j++)
            {
                cout << arr1[i][j] << " ";
            }
        }
    }

    return 0;
}