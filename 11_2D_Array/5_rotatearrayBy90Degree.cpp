/*Input: matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}
Output: {{15,13,2,5},{14,3,4,1},{12,6,8,9},{16,7,10,11}}*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// to rotate the matrix by 90 degree

int main()
{
    int matrix[4][4] = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    // Step 1 :- transpose the matrix

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // swapping rows using two pointer
    int i = 0;
    int j = 4 - 1;
    while (i < j)
    {
        for (int k = 0; k < 4; k++)
        {
            swap(matrix[k][i], matrix[k][j]);
        }
        i++;
        j--;
    }
    //printing the rotated array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}