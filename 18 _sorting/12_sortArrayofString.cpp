/*Given an array of strings arr[] with all strings in lowercase. Sort given strings using
Bubble Sort and display the sorted array.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[][20] = {"physicswallah", "quiz", "practice",
                      "pwskills", "coding"};
    int n =  sizeof(arr) / sizeof(arr[0]);
    cout << "array is :- \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   " ;
    }
    cout<<endl;
    char temp[20];
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (strcmp(arr[i], arr[i + 1]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i + 1]);
                strcpy(arr[i + 1], temp);
            }
        }
    }
    cout << "\n array After sorting : \n"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}