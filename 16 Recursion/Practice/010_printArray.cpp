/*Given an array of integers, print a sum triangle using recursion from it such that the first level has
all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48]*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void dispLAY(vector<int>vec){
    cout<<"["<<" ";
    for (auto i :vec)cout<<i<<" ";
    cout<<"]";
    cout<<endl;
}
void printArray(vector<int>vec){
    if(vec.size()==1){
        dispLAY(vec);
        return;
    }
    dispLAY(vec);
    vector<int>temp;
    for (int i=0;i<vec.size()-1;i++){
        temp.push_back(vec[i]+vec[i+1]);
    }
    printArray(temp);
}
int main(){
printArray({5, 4, 3, 2, 1});
    
     return 0;
}