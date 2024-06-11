//program to find the largest element of a given 2D array of integers.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
 int m1, n1;
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

    int Max=INT_MIN;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
           Max=max(Max,arr1[i][j]);
        }
    }

    cout<<"largest element of array is "<<Max<<endl;
     return 0;
}