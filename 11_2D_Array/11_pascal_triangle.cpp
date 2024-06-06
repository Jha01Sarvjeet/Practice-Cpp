#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// To diaplay the pascal triangle

int main()
{
    int numberOfRows;
    cout << "enter the number of rows" << endl;
    cin >> numberOfRows;
    vector<vector<int>> v;
    for (int i = 1; i <= numberOfRows; i++)
    {
        vector<int> temp(i);
        v.push_back(temp);
    }
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    // display
    for (auto i : v)
    {
        for (auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}