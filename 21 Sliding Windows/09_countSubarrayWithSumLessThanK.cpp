#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*Count Subarrays With Score Less Than K
2302*/
long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        int sum=0;  
        
        while(j<n){
            sum+=nums[j];
            while(sum*(j-i+1)>=k){
                count+=(j-i);
                sum-=nums[i];
                i++;

            }
            j++;
        }
        while(i<n){
            count+=(j-i);
            sum-=nums[i];
            i++;
        }
        return count;
    }
int main()
{
    vector<int> arr = {1,1,1};
    int k = 5;
  
    int subArrayCount=countSubarrays(arr,k);
    cout<<subArrayCount<<endl;
}