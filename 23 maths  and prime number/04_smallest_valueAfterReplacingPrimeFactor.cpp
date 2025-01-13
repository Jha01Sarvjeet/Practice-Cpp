#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*. Smallest Value After Replacing With Sum of Prime Factors
2507*/
bool primeOrNot(int n){
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
        
    }
    return true;
}
int smallestValue(int n)
{
    if(primeOrNot(n))return n;

    int sum=0;
    //finding prime factor count
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0 && primeOrNot(i)){
            int m=n;
            while(m%i==0){
                sum+=i;
                m=m/i;
            }
        }
        
    }
     for(int i=sqrt(n);i>=1;i--){
        if(n%i==0 && primeOrNot(n/i)){
            int m=n;
            while(m%(n/i)==0){
                sum+=(n/i);
                m=m/(n/i);
            }
        }
        
    }
    if(sum==n)return n;
    else return smallestValue(sum);

}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int result=smallestValue(n);
    cout<<result<<endl;
}