// program to print the matrix in wave form.
/*Input :
1 2 3
4 5 6
7 8 9
Output : 7 4 1 2 5 8 9 6 3*/

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

    for (int i = 0; i < n1; i++)
    {
        // top to bottom
        if (i & 1)

        {
            for (int j = 0; j<m1; j++)
            {
                cout << arr1[j][i]<<" ";

            }}
        else
            {for (int j = m1 - 1; j >= 0; j--)
            {
                cout << arr1[j][i]<<" ";
            }
        }
    }


}