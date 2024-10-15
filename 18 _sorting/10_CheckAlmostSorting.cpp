/*Check if given array is almost sorted (elements are at-most one position away)
link:- https://www.geeksforgeeks.org/check-given-array-almost-sorted-elements-one-position-away/
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool almostSorted(vector<int>arr){
    vector<int>temp=arr;
    //sorting temp vector
    sort(temp.begin(),temp.end());
    int n=arr.size();
    for(int i=1;i<n-1;i++){
        if(arr[i]!=temp[i]&&arr[i]!=temp[i-1]&&arr[i]!=temp[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    // vector<int>arr={1, 3, 2, 4};
    vector<int>arr={1, 4, 2, 3};
    bool ans=almostSorted(arr);
    if(ans){
        cout<<"almost sorted"<<endl;
    }
    else{
        cout<<"almost Not Sorted"<<endl;
    }
}