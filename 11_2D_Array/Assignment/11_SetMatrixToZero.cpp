// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//  You must do it in place.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter number of rows" << endl;
    cin >> n;
    cout << "enter number of column" << endl;
    cin >> m;
    int arr[n][m];
    int temp[n][m];
    // enter element in array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            temp[i][j]=arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
    // finding zero and converting corresponding row and column to zero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                // converting corresponding row to zero
                for (int k = 0; k < m; k++)
                {
                    temp[i][k] = 0;
                }
                 // converting corresponding column to zero
            for (int l = 0; l < n; l++)
            {
                temp[l][j] = 0;
            }
            }
           
        }
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}
