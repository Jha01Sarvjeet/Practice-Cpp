#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// you can flip any row and column butnot single element but only one at a time
/*Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
Output: 39
Explanation: 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39*/
int main()
{
    int m1, n1;
    cout << "enter number of rows of  array" << endl;
    cin >> m1;
    cout << "enter number of column of  array" << endl;
    cin >> n1;

    int arr[m1][n1];

    cout << "enter element in arr1" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Step 1:-checking for first element of each row  if 0 then 1 otherwise nothing
    for (int i = 0; i < m1; i++)
    {
        if (arr[i][0] == 0)
        {
            for (int j = 0; j < n1; j++)
            {
                if(arr[i][j]==0){
                    arr[i][j]=1;
                }
                else{
                    arr[i][j]==0;
                }
            }
        }
    }
    //step 2:- checking for number of zeroes and one in each column if zero is more than 1 then reverse column
    for(int i=0;i<n1;i++){
        int nuZero=0;
        int nuOne=0;
        for(int j=0;j<m1;j++){
            if(arr[j][i]==0){
                nuZero++;

            }
            else{
                nuOne++;
            }
        }
        if(nuZero>nuOne){
            for (int j = 0; j < m1; j++)
            {
                if(arr[j][i]==0){
                    arr[j][i]=1;
                }
                else{
                    arr[j][i]==0;
                }
            }
        }
    }
    //converting the binary into decimal Considering each row as a binary Number
    int sum=0;
    for(int  i=0;i<m1;i++){
        int x=1;
        for(int j=n1-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;

        }
    }
    cout<<sum;

    return 0;
}