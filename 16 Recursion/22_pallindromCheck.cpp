//to check for pallindrom
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool checkPallindrom(string str,int s,int e){
    if(str[s]!=str[e]){
        return false;
    }
    else if(s>e)return true;
    return checkPallindrom(str,s+1,e-1);


}
int main(){
string str="aa";
bool ans=checkPallindrom(str,0,str.length()-1);
cout<<ans<<endl;

     return 0;
}