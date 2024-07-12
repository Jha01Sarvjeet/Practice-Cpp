//function call
// #include <iostream>
// using namespace std;
// int product(int a,int b){
//     return a*b;
// }
// int main()
// {
//     int ans=product(2,3);
//     cout<<ans<<endl;

//     return 0;
// }

//function to print hello n times using recursion

#include<iostream>
using namespace std;

void  greet(int n){
    if(n==0)return;
    else{
        cout<<"hello"<<endl;
        greet(n-1);
    }
}

int main(){
greet(3);
    
     return 0;
}