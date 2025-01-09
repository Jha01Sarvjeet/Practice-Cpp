#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*Find unique element from array whre all element occurs twice except one find that number*/
int unique(vector<int>arr){
    int result=0;
    for(auto i:arr){
        result=result^i;
    }
    return result;
}
int main(){
    vector<int>arr={2,5,8,6,3,2,3,5,8};
    int uniqueElement=unique(arr);
    cout<<uniqueElement<<endl;
}