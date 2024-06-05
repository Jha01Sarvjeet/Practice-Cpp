
//Given a positive integer n, generate an n x n matrix filled with 
//elements from 1 to n2 in spiral order.

 
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int count=0;
        int minr=0;
        int minc=0;
        int maxr=n-1;
        int maxc=n-1;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int i=minc;i<=maxc && count<n*n;i++){
                ans[minr][i]=++count;
        }
        minr++;
         //move->>down
        for(int i=minr;i<=maxr && count<n*n;i++){
            ans[i][maxc]=++count;
            
        }
        maxc--;
        //move->>left
        for(int i=maxc;i>=minc && count<n*n;i--){
           ans[maxr][i]=++count;
            
        }
        maxr--;
        //move ->>top
        for(int i=maxr;i>=minr && count<n*n;i--){
            ans[i][minc]=++count;
            
        }
        minc++;
        }
        return ans;
    }
int main(){
int n;
cout<<"enter n"<<endl;
cin>>n;
vector<vector<int>>ans=generateMatrix(n);
for (auto i:ans){
    for(auto j:i){
        cout<<j<<" ";
    }
    
}
    
     return 0;
}