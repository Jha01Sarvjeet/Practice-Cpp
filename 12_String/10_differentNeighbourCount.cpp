// to count the number whose neighbour character are diffrent

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string" << endl;
    cin >> str;
    int c = 0;
    if (str.length() == 1)
    {
        cout << "the total number of different neighbour are " << c << endl;
    }
    else if (str.length()==2){
        if(str[0] != str[1]){
            cout<<"the total number of different neighbour are " << 1 << endl;
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (i == 0)
            {
                if (str[i] != str[i + 1])
                    c++;
            }
            else if (i == str.length() - 1)
            {
                if (str[i] != str[i - 1])
                    c++;
            }
            else if ((str[i] != str[i - 1]) && (str[i] != str[i + 1]))
            {
                c++;
            }
        }

        cout << "the total number of different neighbour are " << c << endl;
    }
    return 0;
}