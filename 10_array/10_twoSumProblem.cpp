#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void twoSumProblem(vector<int> arr, int sum)
{       
    //Brute force aprroach
 
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] + arr[j] == sum)
    //         {
    //             cout<<"{ "<<arr[i]<<", "<<arr[j]<<" }"<<endl;
    //         }
    //     }
    // }
    //better approach
    // sort(arr.begin(),arr.end());
    // int i=0, j=arr.size()-1;
    // while(i<j){
    //     if(arr[i]+arr[j]==sum){
    //         cout<<"{ "<<arr[i]<<", "<<arr[j]<<" }"<<endl;
    //         i++;
    //         j--;
    //     }
    //     else if((arr[i]+arr[j])>sum){
    //         j--;

    //     }
    //     else{
    //         i++;
    //     }
    // }

    //optimal approach
    map<int,int>mpp;

    for(int i=0;i<arr.size();i++){
            int remain=sum-arr[i];
            if(mpp.find(remain)!=mpp.end()){
                cout<<"{ "<<arr[i]<<", "<<remain<<" }"<<endl;

            }
            mpp[arr[i]]=i;
    }

    //optimal to find pair is present or not
    // sort(arr.begin(),arr.end());
    // int i=0;
    // int j=arr.size()-1;
    // bool flag =false;
    // while(i<=j){
    //     if(arr[i]+arr[j]==sum){
    //         cout<<" pair is present"<<endl;
            
    //         flag=true;
    //         break;
    //     }
    //     else if ((arr[i]+arr[j])<sum){
    //         i++;
    //     }
    //     else{
    //         j--;
    //     }
    // }
    // if (flag==false){
    //     cout<<"pair is not present "<<endl;}
    
}
int main()
{
    vector<int>vec={1,2,3,5,4,6,0,7};
    int sum=7;
    cout<<"pair whose sum is equal to given sum"<<endl;
    twoSumProblem(vec,sum);
    
    return 0;
}