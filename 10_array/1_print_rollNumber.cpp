#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number of student" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"roll number of studnts whose marks is less than 35"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
            cout << i + 1 << endl;
    }

    return 0;
}