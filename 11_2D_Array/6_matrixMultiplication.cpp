// two multiply two given matrix by user
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m1, m2, n1, n2;
    cout << "enter number of rows of 1st array" << endl;
    cin >> m1;
    cout << "enter number of column of 1st array" << endl;
    cin >> n1;
    cout << "enter number of rows of 2nd array" << endl;
    cin >> m2;
    cout << "enter number of column of 2nd array" << endl;
    cin >> n2;

    int arr1[m1][n1];
    int arr2[m2][n2];

    if(n1!=m2){
        cout<<"invalid matrix Cannot maultiply"<<endl;

    }
    else{
        cout<<"enter element in arr1"<<endl;
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"enter element in arr1"<<endl;
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                cin>>arr2[i][j];
            }
        }
    }

    int ans[m1][n2];//array to store resultant matrix
    for(int i=0;i<m1;i++){
        for(int j=0;j<m2;j++){
            int sum=0;
            for(int k=0;k<n1;k++){
                sum+=arr1[i][k]*arr2[k][j];
            }
            ans[i][j]=sum;
        }
    }
    for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }





    return 0;
}