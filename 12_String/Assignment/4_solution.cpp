// Input a string of even length and reverse the second half of the string.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string of " << endl;
    cin >> str;
    int mid=str.length()/2 ;
    int s=mid;
    int e=str.length()-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    cout<<str<<endl;

    return 0;
}