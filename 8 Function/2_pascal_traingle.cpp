/*to implemenet yhe pascal triangle*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// brute force approach with very highh complexity
//  int factorial(int n)
//  {
//      int f = 1;
//      if (n == 0)
//          return 1;
//      for (int i = 2; i <= n; i++)
//      {
//          f *= i;
//      }
//      return f;
//  }
//  int ncr(int n, int r)
//  {
//      int result = (factorial(n) / (factorial(r) * factorial(n - r)));
//      return result;
//  }
//  int npr(int n, int r)
//  {
//      int result = (factorial(n) / factorial(n - r));
//      return result;
//  }
//  void pascal(int n)
//  {
//      for (int i = 0; i <= n; i++)
//      {
//          for (int j = 0; j <=i; j++)
//          {
//              cout << ncr(i, j) << " ";
//          }
//          cout<<endl;
//      }
//  }

// to find perticular row coloumn value

// int nCr(int n, int r)
// {
//     int res = 1;
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (1 + i);
//     }
//     return res;
// }
// void pasValue(int n, int r)
// {
//     cout<<nCr(n - 1, r - 1);
// }

// to find perticular row

// int nCr(int n, int r)
// {
//     int res = 1;
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }
// void pascal(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << nCr(n - 1, i) << " ";
//     }
//     cout << endl;
// }

// to print n rows of pascal triangle
int nCr(int n, int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
void pascal(int n)
{
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            cout << nCr(j - 1, i) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, r;
    cout << "enter no of rows" << endl;
    cin >> n;
    cout << "enter no of rows" << endl;
    cin >> r;
    // pascal(n); //  to print  a single row
    // pasValue(n, r); // to print a single value
    pascal(n);//to print n rows

    return 0;
}