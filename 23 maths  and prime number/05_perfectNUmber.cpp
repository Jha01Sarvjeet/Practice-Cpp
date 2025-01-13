/*A perfect number is a positive integer that is equal to the sum of its positive divisors,
 excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.*/
 #include<bits/stdc++.h>
 #include <iostream>
 using namespace std;
  bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<sqrt(num);i++){
            if(num%i==0)sum+=i;
        }
         for(int i=sqrt(num);i>=1;i--){
            if(num%i==0)sum+=num/i;
        }
        if(num==(sum-num))return true;
        else return false;
        

    }
 int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    bool result=checkPerfectNumber(n);
    if(result)cout<<"perfect number"<<endl;
    else cout<<"not perfect number"<<endl;
 }