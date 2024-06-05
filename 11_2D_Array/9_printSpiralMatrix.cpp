// to print the matrix in spiral form
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //taking input in array
    int m1, n1;
    cout << "enter number of rows of 1st array" << endl;
    cin >> m1;
    cout << "enter number of column of 1st array" << endl;
    cin >> n1;
    int totale=m1*n1;
    int count=0;
    int arr[m1][n1];

    cout << "enter element in arr1" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int minr=0;
    int minc=0;
    int maxr=m1-1;
    int maxc=n1-1;
    while(minr<=maxr && minc<=maxc){
        //right->> move
        for(int i=minc;i<=maxc && count<totale;i++){
            cout<<arr[minr][i]<<" ";
            count++;
        }
        minr++;
        //move->>down
        for(int i=minr;i<=maxr && count<totale;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //move->>left
        for(int i=maxc;i>=minc && count<totale;i--){
            cout<<arr[maxr][i]<<" ";
            count++;
        }
        maxr--;
        //move ->>top
        for(int i=maxr;i>=minr && count<totale;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }

    return 0;
}