#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*First negative number in every window of size k

*/
//brute force approach
vector<int> firstNeg(vector<int>arr,int k){
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                ans.push_back(arr[j]);
                break;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={2,-3,4,4,-7,-1,4,-2,6};
    int k=3;
    vector<int>res=firstNeg(arr,k);
    for(auto i :res){
        cout<<i<<" ";
    }
    cout<<endl;
}