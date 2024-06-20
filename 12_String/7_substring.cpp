//to print the sunstring of string 
//<string name>.substr(idx):- from idex to end
//<string name>.substr(idx,len):- from idex till length of the string 
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string str="hello";
cout<<str.substr(1)<<endl; //from 1 index to end
cout<<str.substr(1,2); //from 1 index kof length 2
    
     return 0;
}