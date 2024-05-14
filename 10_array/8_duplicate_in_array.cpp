#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool duplicate(int arr[], int n)

{
    //brute force approach

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //             count++;
    //     }
    //     if (count > 1)
    //         {return true;
    //         break;}
        
    // }
    // return false;
    //using extra space  
    map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto i:mpp){
        // cout<<i.first<<"  "<<i.second<<endl;
        if(i.second>1)
            {return true;}
            
    }
    // return false;
}
int main()
{

    int arr[]={2,3,6,5,7,1,1,9};
    bool ans=duplicate(arr,8);
    if(ans)
        cout<<"duplicate found"<<endl;
    else{
        cout<<"duplicate not found"<<endl;
    }

    return 0;
}