#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*Print factorial of 25 natural numbers*/
vector<long long int> factorial(int n){
    vector<long long int>result(n+1,1);
    int MOD=1000000000+7;
    for(int i=2;i<=n;i++){
        result[i]=(i%MOD*result[i-1]%MOD)%MOD;
    }
    return result;
}
int main(){
    vector<long long int>fact=factorial(25);
    for (int i=0;i<=25;i++){
        cout<<i<<"!= "<<fact[i]<<endl;
    }
}