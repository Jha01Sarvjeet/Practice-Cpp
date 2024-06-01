#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int maxArea(vector<int>& height) {
        //brute force approach
        int n=height.size();
        int he=0;
        int area=0;
        int width=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         he=min(height[i],height[j]);
        //         width=j-i;
        //         area=max(area,width*he);

        //     }
        // }
        // return area;
//two pointer approach( better approach)
        int i=0;
        int j=n-1;
        while(i<j){
             he=min(height[i],height[j]); 
             width=j-i;
            area=max(area,width*he);

            //shifting smaller height
            if(height[i]<height[j])
                i++;
            else{
                j--;
            }

        }
        return area;
    }
int main(){
 vector<int> nums = {1,8,6,2,5,4,8,3,7};
     int ans = maxArea(nums);
     cout << "container having maximum water  is "<<ans;
    
     return 0;
}