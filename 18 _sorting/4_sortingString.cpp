// sort the string in decreasing order after removing the cgaracter less than 'X'
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "enter string" << endl;
    cin >> str;
    cout<<str<<endl;
    string temp = "";
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'X')
        {
            temp += str[i];
        }
    }
    n = temp.length();
    for (int i = 0; i < n; i++)
    {   bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(temp[j]<temp[j+1]){
                flag=true;
                swap(temp[j],temp[j+1]);
            }
        }
        if(flag==false){
            break;
        }
        else{
            flag=false;
        }
    }
    cout<<temp<<endl;
}