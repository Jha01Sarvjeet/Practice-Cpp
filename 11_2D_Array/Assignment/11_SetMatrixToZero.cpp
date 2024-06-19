// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//  You must do it in place.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter number of rows" << endl;
    cin >> n;
    cout << "enter number of column" << endl;
    cin >> m;
    int arr[n][m];

    // 1)Brute force approach  with extraspace

    // int temp[n][m];

    // // enter element in array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //         temp[i][j]=arr[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // // finding zero and converting corresponding row and column to zero
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr[i][j] == 0)
    //         {
    //             // converting corresponding row to zero
    //             for (int k = 0; k < m; k++)
    //             {
    //                 temp[i][k] = 0;
    //             }
    //              // converting corresponding column to zero
    //         for (int l = 0; l < n; l++)
    //         {
    //             temp[l][j] = 0;
    //         }
    //         }

    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2)brute force approach
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < m; j++)
    //      {
    //          cin >> arr[i][j];

    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr[i][j] == 0)
    //         {
    //             // converting corresponding row to zero
    //             for (int k = 0; k < m; k++)
    //             {
    //                if (arr[i][k] != 0)
    //                     arr[i][k] = -1;
    //             }
    //              // converting corresponding column to zero
    //         for (int l = 0; l < n; l++)
    //         {
    //            if (arr[l][j] != 0)
    //                     arr[l][j] = -1;
    //         }
    //         }

    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //      if(arr[i][j]==-1){
    //         arr[i][j]=0;
    //      }

    //     }
    // }
    //  for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Better approach

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // int row[n]={0};
    // int col[m]={0};
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(arr[i][j]==0){
    //             row[i]=1;
    //             col[j]=1;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if((row[i]==1)|| col[j]==1){
    //                     arr[i][j]=0;
    //         }
    //     }
    // }

    //  for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
//OPtimal approah
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int col0=1;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==0){
            arr[i][0]=0;
            if(j!=0){
                arr[0][j]=0;
            }
            else{
              col0=0;  
            }
        }
    }
}
for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
        if(arr[i][0]==0){
            for(int k=0;k<m;k++){
                arr[i][k]=0;
            }
        }
        if(arr[0][j]==0){
            for(int k=0;k<n;k++){
                arr[k][j]=0;
            }
        }

    }
}
if(arr[0][0]==0){
     for(int k=0;k<m;k++){
                arr[0][k]=0;
            }
}
if(col0==0){
    for(int k=0;k<n;k++){
                arr[k][0]=0;
            }
}
 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
