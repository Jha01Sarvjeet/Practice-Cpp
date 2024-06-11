//row number having the maximum sum in a given matrix.
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
    int sumMax=0;
    int index=0;
    for(int i=0;i<m1;i++){
        int sum=0;
        for(int j=0;j<n1;j++){
            sum+=arr1[i][j];
        }
        if(sum>sumMax){
            index=i;
            sumMax=sum;
        }
        
    }
    cout<<"row with maximum sum is "<<index+1<<endl;
    
     return 0;
}