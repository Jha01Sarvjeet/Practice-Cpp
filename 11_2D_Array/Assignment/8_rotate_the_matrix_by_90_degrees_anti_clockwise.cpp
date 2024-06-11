// rotate the matrix by 90 degrees anti-clockwise.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int m1, n1;
    cout << "enter number of rows of 1st array(odd )" << endl;
    cin >> m1;
    cout << "enter number of column of 1st array(odd)" << endl;
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
    for (int i = 0; i < m1 ; i++)
    {
        for (int j = 0; j < n1/2; j++)
        {

            swap(arr1[i][j], arr1[i][m1 - 1 - j]);
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {

            swap(arr1[i][j], arr1[j][i]);
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {

            cout<< arr1[i][j] << " ";
        }
        cout<< endl;
    }

    return 0;
}