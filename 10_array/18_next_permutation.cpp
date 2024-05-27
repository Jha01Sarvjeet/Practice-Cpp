    #include<iostream>
    #include <bits/stdc++.h> 
    #include <vector> 
    #include <algorithm>
    using namespace std;
    void reverseVector(vector<int>& nums,int i,int j){
        while(i<j){
            swap(nums[i++],nums[j--]);
        }
    }
    void nextPermutation(vector<int>& nums) {
            int n=nums.size();
            //finding picvot element
            int idx=-1;
            for(int i=n-2;i>=0;i++){
                if(nums[i]<nums[i+1]){
                    idx=i;
                    break;
                }
            }
            if(idx == -1) {
                sort(nums.begin(),nums.end());
                return;
                
            }
        else { //sorting element from idx+1 to end;
            reverse(nums.begin()+idx+1,nums.end());
            //finding element just greater than pivot in idx+1 - end;
            int j=idx+1;
            for (int k=idx+1;k<n;k++){
                if(nums[k]>nums[idx]){
                    j=k;
                    break;
                }

            }
            //swapping idx and j(largest among idx+1  - end)
            swap(nums[idx],nums[j]);
            return;
    }
            
        }
    int main(){
    vector<int>nums={3,2,1};
    // for(auto i:nums){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    nextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
        
        return 0;
    }