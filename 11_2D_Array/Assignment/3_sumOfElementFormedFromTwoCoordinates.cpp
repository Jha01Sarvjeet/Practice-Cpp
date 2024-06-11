/*a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m1, n1, l1, l2, r1, r2;
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
    cout << "enter coordinates(l1,r1)" << endl;
    cin >> l1;
    cin >> r1;

    cout << "enter coordinates(l2,r2)" << endl;
    cin >> l2;
    cin >> r2;
    int sum = 0;
    if (l1 > l2)
        swap(l1, l2);
    if (r1 > r2)
        swap(r1, r2);

    for (int i = l1; i <=l2; i++)
    {
        for (int j = r1; j <=r2; j++)
        {
            sum += arr1[i][j];
        }
    }

    cout << "Sum of rectangle formee from rectangle" << sum << endl;

    return 0;
}