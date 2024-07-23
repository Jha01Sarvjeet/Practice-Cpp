// to print the subarray

// iterative approach
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void print(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     for (int i = 0; i < 3; i++)
//     {

//         for (int j = i; j < 3; j++)
//         {
            
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }


//first recursive approach

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std; 
// void subArray(int *arr,int i,int n){
//     if(n==i){
//         return;
//     }
//     for(int j=i;j<n;j++){
//         for(int k=i;k<j;k++){
//             cout<<arr[k]<<" ";
//         }
//           cout<<endl;
//     }
  
//     subArray(arr,i+1,n);


// }

// int main(){
// int arr[]={1,2,3};
// subArray(arr,0,3);
    
//      return 0;
// }

//second recursive approch

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void disaplay(vector<int>ans){
    for(auto i :ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
void subArray(vector<int>ans,vector<int>original,int idx){
    if(idx==original.size()){
        disaplay(ans);
        return;
    }
    subArray(ans,original,idx+1);
    if(ans.size()==0||ans[ans.size()-1]==original[idx-1]){
        ans.push_back(original[idx]);
        subArray(ans,original,idx+1);
    }
}
int main(){
   vector<int>vec{1,2,3,4};
    subArray({},vec,0);
    
     return 0;
}