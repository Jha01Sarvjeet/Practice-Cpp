//koko eating leetcode (875)
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool isValid(vector<int>piles,int mid,int hours){
    int n=piles.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(piles[i]<mid){
            count++;
        }
        else if(piles[i]>mid){
            count=count+(piles[i]/mid)+1;
        }
        else{
            count+=piles[i]/mid;
        }
    }
    if(count>hours){
        return false;
    }
    return true;
}
int minKokoEating(vector<int>piles,int hours){
    int s=1;
    int e=INT_MIN;
    int n=piles.size();
    int mid=-1;
    int ans=-1;
    for(int i=0;i<n ;i++){
        e=max(e,piles[i]);
    }
    while(s<=e){
        mid=s+(e-s)/2;
        if(isValid(piles,mid,hours)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;

}
int main(){
vector<int>  piles = {30,11,23,4,20};
int h = 6;
int ans=minKokoEating(piles,h);
cout<<ans<<endl;
    
     return 0;
}