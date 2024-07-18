//to skip a character
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void removeCharacter(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    else if(original[idx]!='a'){
        ans=ans+original[idx];
        removeCharacter(ans,original,idx+1);
    }
    else removeCharacter(ans,original,idx+1);
}
int main(){
string str;
cout<<"enter string"<<endl;
getline(cin,str);

removeCharacter("",str,0);
    
     return 0;
}