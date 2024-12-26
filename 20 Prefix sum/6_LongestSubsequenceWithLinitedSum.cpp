#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//2389
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans(queries.size());
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int len=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>queries[i])break;
                len++;
            }
            ans[i]=len;
        }
        return ans;
    }
int main(){
    vector<int>nums = {4,5,2,1};
    vector<int> queries = {3,10,21};
    vector<int>ans=answerQueries(nums,queries);
    for(auto i :ans)cout<<i<<" ";
    cout<<endl;
}