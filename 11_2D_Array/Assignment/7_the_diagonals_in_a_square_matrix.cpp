// program to print the elements of both the diagonals in a square matrix.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   int m1, n1;
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
    //displaying the result
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if((i==j )|| ((i+j)==(m1-1))){
                cout<<arr1[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}