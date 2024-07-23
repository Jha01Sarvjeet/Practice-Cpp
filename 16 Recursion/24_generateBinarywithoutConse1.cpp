//print the binary string without consecutive 1
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void generateBinary(string ans,int n ){
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    generateBinary(ans+'0',n-1);
    if(ans[ans.length()-1]!='1')
        generateBinary(ans+'1',n-1);
}
int main(){
int n=3;
generateBinary("",n);
    
     return 0;
}